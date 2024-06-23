#include <stdio.h>

#define MAX_SIZE 100

struct Stack {
    int *data;
    int size;
    int top;
};

void initializeStack(struct Stack *s, int *array, int arraySize) {
    s->data = array;
    s->size = arraySize;
    s->top = -1;
}

int isFull(struct Stack *s) {
    return (s->top == s->size - 1);
}

int isEmpty(struct Stack *s) {
    return (s->top == -1);
}

void push(struct Stack *s, int item) {
    if (isFull(s)) {
        printf("Stack is full. Cannot push.\n");
        return;
    }
    s->top++;
    s->data[s->top] = item;
}

int pop(struct Stack *s) {
    if (isEmpty(s)) {
        printf("Stack is empty. Cannot pop.\n");
        return -1; // Assuming -1 as an indicator of an empty stack
    }
    int item = s->data[s->top];
    s->top--;
    return item;
}

int main() {
    int array[MAX_SIZE]; // Given array for stack
    struct Stack s;
    initializeStack(&s, array, MAX_SIZE);

    // Example usage
    push(&s, 10);
    push(&s, 20);
    push(&s, 30);

    printf("Popped item: %d\n", pop(&s));    
    printf("Popped item: %d\n", pop(&s));
    printf("Popped item: %d\n", pop(&s));

    // Trying to pop from an empty stack
    printf("Popped item: %d\n", pop(&s));

    return 0;
}
