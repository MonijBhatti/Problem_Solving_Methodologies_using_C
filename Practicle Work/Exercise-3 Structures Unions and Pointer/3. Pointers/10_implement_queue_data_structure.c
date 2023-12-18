// 10. Write a program that uses pointers to implement a queue data structure.

#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10

// Structure to represent a queue
struct Queue {
    int *arr;
    int front;
    int rear;
    int size;
};

// Function to initialize the queue
void initializeQueue(struct Queue *queue, int maxSize) {
    queue->arr = (int *)malloc(maxSize * sizeof(int));
    if (queue->arr == NULL) {
        printf("Memory allocation failed.\n");
        exit(EXIT_FAILURE);
    }
    queue->front = -1;
    queue->rear = -1;
    queue->size = maxSize;
}

// Function to check if the queue is empty
int isEmpty(struct Queue *queue) {
    return queue->front == -1;
}

// Function to check if the queue is full
int isFull(struct Queue *queue) {
    return (queue->rear + 1) % queue->size == queue->front;
}

// Function to enqueue an element into the queue
void enqueue(struct Queue *queue, int value) {
    if (isFull(queue)) {
        printf("Queue overflow. Cannot enqueue element into a full queue.\n");
        return;
    }
    if (isEmpty(queue)) {
        queue->front = 0; // Set front to 0 for the first element
    }
    queue->rear = (queue->rear + 1) % queue->size;
    queue->arr[queue->rear] = value;
    printf("Enqueued %d into the queue.\n", value);
}

// Function to dequeue an element from the queue
int dequeue(struct Queue *queue) {
    if (isEmpty(queue)) {
        printf("Queue underflow. Cannot dequeue element from an empty queue.\n");
        exit(EXIT_FAILURE);
    }
    int value = queue->arr[queue->front];
    if (queue->front == queue->rear) {
        // Reset front and rear to -1 for the last element
        queue->front = -1;
        queue->rear = -1;
    } else {
        queue->front = (queue->front + 1) % queue->size;
    }
    return value;
}

// Function to display the elements in the queue
void displayQueue(struct Queue *queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty.\n");
        return;
    }
    printf("Elements in the queue:\n");
    int i = queue->front;
    do {
        printf("%d\n", queue->arr[i]);
        i = (i + 1) % queue->size;
    } while (i != (queue->rear + 1) % queue->size);
}

// Function to deallocate memory for the queue
void deallocateQueue(struct Queue *queue) {
    free(queue->arr);
}

int main() {
    struct Queue myQueue;
    initializeQueue(&myQueue, MAX_SIZE);

    enqueue(&myQueue, 10);
    enqueue(&myQueue, 20);
    enqueue(&myQueue, 30);

    displayQueue(&myQueue);

    printf("Dequeued %d from the queue.\n", dequeue(&myQueue));

    displayQueue(&myQueue);

    deallocateQueue(&myQueue);

    return 0;
}
