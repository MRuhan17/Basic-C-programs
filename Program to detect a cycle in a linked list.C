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

// Function to create a cycle in the linked list for testing
void createCycle(struct Node* head, int position) {
    if (head == NULL) return;

    struct Node* cycleNode = NULL;
    struct Node* temp = head;
    int count = 0;

    while (temp->next != NULL) {
        if (count == position) {
            cycleNode = temp;
        }
        temp = temp->next;
        count++;
    }

    // Create a cycle by connecting the last node to the cycleNode
    if (cycleNode != NULL) {
        temp->next = cycleNode;
    }
}

// Function to detect a cycle in the linked list
int detectCycle(struct Node* head) {
    if (head == NULL) return 0;

    struct Node* slow = head; // Slow pointer
    struct Node* fast = head; // Fast pointer

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;           // Move slow pointer by one
        fast = fast->next->next;    // Move fast pointer by two

        // If slow and fast meet, there is a cycle
        if (slow == fast) {
            return 1; // Cycle detected
        }
    }
    return 0; // No cycle
}

// Function to print the linked list (used for debugging)
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

// Main function to test cycle detection
int main() {
    struct Node* head = NULL; // Start with an empty list

    int choice, value;

    do {
        // Menu for linked list operations
        printf("\nLinked List Operations:\n");
        printf("1. Insert at End\n");
        printf("2. Create Cycle\n");
        printf("3. Detect Cycle\n");
        printf("4. Print List\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to insert at end: ");
                scanf("%d", &value);
                insertAtEnd(&head, value);
                break;
            case 2:
                printf("Enter position to create a cycle (0-indexed): ");
                scanf("%d", &value);
                createCycle(head, value);
                break;
            case 3:
                if (detectCycle(head)) {
                    printf("Cycle detected in the linked list.\n");
                } else {
                    printf("No cycle in the linked list.\n");
                }
                break;
            case 4:
                printList(head);
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}
