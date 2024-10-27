#include <stdio.h>
#include <stdlib.h>

// Defining the structure of a linked list node
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node with provided data
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Oops! Memory allocation failed.\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to add a node at the end of the linked list
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

// Function to display the entire linked list
void printList(struct Node* node) {
    if (node == NULL) {
        printf("The list is currently empty.\n");
        return;
    }
    printf("Linked List: ");
    while (node != NULL) {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}

// Function to reverse the linked list
struct Node* reverseList(struct Node* head) {
    struct Node* previous = NULL;
    struct Node* current = head;
    struct Node* following = NULL;
    while (current != NULL) {
        following = current->next; // Save the next node
        current->next = previous;  // Flip the link
        previous = current;        // Move previous forward
        current = following;       // Move current forward
    }
    return previous; // Return the new head of the reversed list
}

// Function to check if the linked list is a palindrome
int isPalindrome(struct Node* head) {
    if (head == NULL || head->next == NULL) {
        return 1; // An empty or single-element list is always a palindrome
    }

    // Use slow and fast pointers to find the list's midpoint
    struct Node *slowPtr = head, *fastPtr = head;
    while (fastPtr != NULL && fastPtr->next != NULL) {
        slowPtr = slowPtr->next;
        fastPtr = fastPtr->next->next;
    }

    // Reverse the second half of the list
    struct Node* secondHalfStart = reverseList(slowPtr);
    struct Node* firstHalfStart = head;

    // Compare the first and the reversed second halves
    while (secondHalfStart != NULL) {
        if (firstHalfStart->data != secondHalfStart->data) {
            return 0; // Not a palindrome
        }
        firstHalfStart = firstHalfStart->next;
        secondHalfStart = secondHalfStart->next;
    }

    return 1; // List is a palindrome
}

// Main function to demonstrate palindrome checking in a linked list
int main() {
    struct Node* head = NULL; // Starting with an empty list

    // Insert elements into the linked list to test for palindromes
    insertAtEnd(&head, 1);
    insertAtEnd(&head, 2);
    insertAtEnd(&head, 3);
    insertAtEnd(&head, 2);
    insertAtEnd(&head, 1);

    // Display the linked list
    printf("Original List: ");
    printList(head);

    // Check if the linked list is a palindrome
    if (isPalindrome(head)) {
        printf("Good news! The linked list is a palindrome.\n");
    } else {
        printf("The linked list is not a palindrome.\n");
    }

    return 0;
}
