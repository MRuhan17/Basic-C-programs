#include <stdio.h>
#include <stdlib.h>

#define MAX 100 // Maximum size of the queue

// Structure to represent a queue
struct Queue {
    int items[MAX];
    int front;
    int rear;
};

// Function to initialize the queue
void initQueue(struct Queue* q) {
    q->front = -1; // Initialize front to -1
    q->rear = -1;  // Initialize rear to -1
}

// Function to check if the queue is full
int isFull(struct Queue* q) {
    return q->rear == MAX - 1; // Return true if full
}

// Function to check if the queue is empty
int isEmpty(struct Queue* q) {
    return q->front == -1 || q->front > q->rear; // Return true if empty
}

// Function to add an element to the queue
void enqueue(struct Queue* q, int value) {
    if (isFull(q)) {
        printf("Queue Overflow! Unable to enqueue %d\n", value);
        return;
    }
    if (isEmpty(q)) {
        q->front = 0; // Set front to 0 if the queue is empty
    }
    q->items[++(q->rear)] = value; // Increment rear and add value
    printf("%d enqueued to queue\n", value);
}

// Function to remove an element from the queue
int dequeue(struct Queue* q) {
    if (isEmpty(q)) {
        printf("Queue Underflow! Unable to dequeue\n");
        return -1; // Indicate an error
    }
    return q->items[(q->front)++]; // Return value and increment front
}

// Function to display the queue
void display(struct Queue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue elements are:\n");
    for (int i = q->front; i <= q->rear; i++) {
        printf("%d\n", q->items[i]);
    }
}

int main() {
    struct Queue q; // Create a queue
    initQueue(&q);  // Initialize the queue

    int choice, value;

    do {
        // Menu for queue operations
        printf("\nQueue Operations:\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to enqueue: ");
                scanf("%d", &value);
                enqueue(&q, value);
                break;
            case 2:
                value = dequeue(&q);
                if (value != -1) {
                    printf("Dequeued value: %d\n", value);
                }
                break;
            case 3:
                display(&q);
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
