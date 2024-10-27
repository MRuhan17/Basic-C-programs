#include <stdio.h>
#include <stdlib.h>

#define MAX 100 // Maximum size of the stack

// Structure to represent a stack
struct Stack {
    int items[MAX];
    int top;
};

// Function to initialize the stack
void initStack(struct Stack* s) {
    s->top = -1; // Stack is initially empty
}

// Function to check if the stack is full
int isFull(struct Stack* s) {
    return s->top == MAX - 1; // Return true if full
}

// Function to check if the stack is empty
int isEmpty(struct Stack* s) {
    return s->top == -1; // Return true if empty
}

// Function to add an element to the stack
void push(struct Stack* s, int value) {
    if (isFull(s)) {
        printf("Stack Overflow! Unable to push %d\n", value);
        return;
    }
    s->items[++(s->top)] = value; // Increment top and add value
    printf("%d pushed to stack\n", value);
}

// Function to remove an element from the stack
int pop(struct Stack* s) {
    if (isEmpty(s)) {
        printf("Stack Underflow! Unable to pop\n");
        return -1; // Indicate an error
    }
    return s->items[(s->top)--]; // Return value and decrement top
}

// Function to display the stack
void display(struct Stack* s) {
    if (isEmpty(s)) {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack elements are:\n");
    for (int i = s->top; i >= 0; i--) {
        printf("%d\n", s->items[i]);
    }
}

int main() {
    struct Stack s; // Create a stack
    initStack(&s);  // Initialize the stack

    int choice, value;

    do {
        // Menu for stack operations
        printf("\nStack Operations:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(&s, value);
                break;
            case 2:
                value = pop(&s);
                if (value != -1) {
                    printf("Popped value: %d\n", value);
                }
                break;
            case 3:
                display(&s);
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
