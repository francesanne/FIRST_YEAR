#include <stdio.h>

#define MAX_SIZE 100

struct Queue {
    int data[MAX_SIZE];
    int size;
    int head;
    int tail;
};

// Function to initialize the queue
void initializeQueue(struct Queue *q) {
    q->size = 0;
    q->head = 0;
    q->tail = -1;
}

// Function to check if the queue is full
int isFull(struct Queue *q) {
    return (q->size == MAX_SIZE);
}

// Function to check if the queue is empty
int isEmpty(struct Queue *q) {
    return (q->size == 0);
}

// Function to add an element to the queue (enqueue)
void enqueue(struct Queue *q, int item) {
    if (isFull(q)) {
        printf("Queue is full. Cannot enqueue.\n");
        return;
    }
    q->tail++;
    q->data[q->tail] = item;
    q->size++;
}

// Function to remove an element from the queue (dequeue)
int dequeue(struct Queue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty. Cannot dequeue.\n");
        return -1; // Indicator of an empty queue
    }
    int item = q->data[q->head];
    q->head++;
    q->size--;
    return item;
}

int main() {
    struct Queue q;
    initializeQueue(&q);

    // Example usage
    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);

    printf("Dequeued item: %d\n", dequeue(&q));
    printf("Dequeued item: %d\n", dequeue(&q));
    printf("Dequeued item: %d\n", dequeue(&q));

    // Trying to dequeue from an empty queue
    printf("Dequeued item: %d\n", dequeue(&q));

    return 0;
}

