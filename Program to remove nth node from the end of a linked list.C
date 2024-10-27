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

// Function to remove the nth node from the end of the linked list
void removeNthFromEnd(struct Node** head, int n) {
    struct Node *first = *head, *second = *head;
    int count = 0;

    // Move first pointer n nodes ahead
    while (count < n) {
        if (first == NULL) {
            printf("The list has fewer than %d nodes.\n", n);
            return; // List has fewer than n nodes
        }
        first = first->next;
        count++;
    }

    // Move both pointers until first reaches the end
    while (first != NULL) {
        first = first->next;
        second = second->next;
    }

    // second now points to the node before the node to be deleted
    if (second != NULL && second->next != NULL) {
        struct Node* temp = second->next;
        second->next = temp->next; // Remove the nth node
        free(temp); // Free the removed node
    } else if (second == NULL) {
        // Removing the head
        struct Node* temp = *head;
        *head = (*head)->next; // Move head to next
        free(temp); // Free the removed head node
    }
}

// Main function to test removing the nth node from the end
int main() {
    struct Node* head = NULL; // Start with an empty list

    // Inserting elements into the linked list
    insertAtEnd(&head, 1);
    insertAtEnd(&head, 2);
    insertAtEnd(&head, 3);
    insertAtEnd(&head, 4);
    insertAtEnd(&head, 5);

    // Print the original list
    printf("Original List: ");
    printList(head);

    // Remove the 2nd node from the end
    int n = 2;
    removeNthFromEnd(&head, n);

    // Print the updated list
    printf("Updated List after removing %dth node from end: ", n);
    printList(head);

    return 0;
}
