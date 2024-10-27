#include <stdio.h>
#include <stdlib.h>

// Structure for a linked list node
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a node at the end of the linked list
void insertAtEnd(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    struct Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Function to find the middle of the linked list
void findMiddle(struct Node* head) {
    if (head == NULL) {
        printf("The list is empty.\n");
        return;
    }

    struct Node* slow = head; // Pointer that moves one step
    struct Node* fast = head; // Pointer that moves two steps

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;       // Move slow by one
        fast = fast->next->next; // Move fast by two
    }

    printf("The middle element is: %d\n", slow->data);
}

// Function to print the linked list
void printList(struct Node* node) {
    if (node == NULL) {
        printf("List is empty\n");
        return;
    }
    printf("Linked List: ");
    while (node != NULL) {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}

// Main function to test the linked list middle finding
int main() {
    struct Node* head = NULL; // Start with an empty list

    int choice, value;

    do {
        // Menu for linked list operations
        printf("\nLinked List Operations:\n");
        printf("1. Insert at End\n");
        printf("2. Find Middle Element\n");
        printf("3. Print List\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to insert at end: ");
                scanf("%d", &value);
                insertAtEnd(&head, value);
                break;
            case 2:
                findMiddle(head);
                break;
            case 3:
                printList(head);
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}

