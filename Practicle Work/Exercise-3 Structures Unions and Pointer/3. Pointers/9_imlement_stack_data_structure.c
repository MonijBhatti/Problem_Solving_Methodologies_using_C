// 9. Write a program that uses pointers to implement a stack data structure.

#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10

// Structure to represent a stack
struct Stack {
    int *arr;
    int top;
};

// Function to initialize the stack
void initializeStack(struct Stack *stack) {
    stack->arr = (int *)malloc(MAX_SIZE * sizeof(int));
    if (stack->arr == NULL) {
        printf("Memory allocation failed.\n");
        exit(EXIT_FAILURE);
    }
    stack->top = -1; // Initialize top to -1 to indicate an empty stack
}

// Function to check if the stack is empty
int isEmpty(struct Stack *stack) {
    return stack->top == -1;
}

// Function to check if the stack is full
int isFull(struct Stack *stack) {
    return stack->top == MAX_SIZE - 1;
}

// Function to push an element onto the stack
void push(struct Stack *stack, int value) {
    if (isFull(stack)) {
        printf("Stack overflow. Cannot push element onto a full stack.\n");
        return;
    }
    stack->arr[++stack->top] = value;
    printf("Pushed %d onto the stack.\n", value);
}

// Function to pop an element from the stack
int pop(struct Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack underflow. Cannot pop element from an empty stack.\n");
        exit(EXIT_FAILURE);
    }
    return stack->arr[stack->top--];
}

// Function to display the elements in the stack
void displayStack(struct Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty.\n");
        return;
    }
    printf("Elements in the stack:\n");
    for (int i = 0; i <= stack->top; ++i) {
        printf("%d\n", stack->arr[i]);
    }
}

// Function to deallocate memory for the stack
void deallocateStack(struct Stack *stack) {
    free(stack->arr);
}

int main() {
    struct Stack myStack;
    initializeStack(&myStack);

    push(&myStack, 10);
    push(&myStack, 20);
    push(&myStack, 30);

    displayStack(&myStack);

    printf("Popped %d from the stack.\n", pop(&myStack));

    displayStack(&myStack);

    deallocateStack(&myStack);

    return 0;
}
