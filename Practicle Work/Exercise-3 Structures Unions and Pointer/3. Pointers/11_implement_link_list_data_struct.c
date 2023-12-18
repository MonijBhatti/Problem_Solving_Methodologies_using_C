// 11. Write a program that uses pointers to implement a linked list data structure.

#include <stdio.h>
#include <stdlib.h>

// Structure to represent a node in the linked list
struct Node {
    int data;
    struct Node *next;
};

// Function to create a new node
struct Node* createNode(int value) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        exit(EXIT_FAILURE);
    }
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a node at the beginning of the linked list
void insertAtBeginning(struct Node **head, int value) {
    struct Node *newNode = createNode(value);
    newNode->next = *head;
    *head = newNode;
    printf("Inserted %d at the beginning of the linked list.\n", value);
}

// Function to insert a node at the end of the linked list
void insertAtEnd(struct Node **head, int value) {
    struct Node *newNode = createNode(value);
    if (*head == NULL) {
        *head = newNode;
    } else {
        struct Node *temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    printf("Inserted %d at the end of the linked list.\n", value);
}

// Function to delete a node with a given value from the linked list
void deleteNode(struct Node **head, int value) {
    struct Node *temp = *head;
    struct Node *prev = NULL;

    while (temp != NULL && temp->data != value) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Element %d not found in the linked list.\n", value);
        return;
    }

    if (prev == NULL) {
        // If the node to be deleted is the first node
        *head = temp->next;
    } else {
        prev->next = temp->next;
    }

    free(temp);
    printf("Deleted %d from the linked list.\n", value);
}

// Function to display the elements in the linked list
void displayLinkedList(struct Node *head) {
    if (head == NULL) {
        printf("Linked list is empty.\n");
        return;
    }

    printf("Elements in the linked list:\n");
    struct Node *temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Function to deallocate memory for the linked list
void deallocateLinkedList(struct Node *head) {
    struct Node *temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}

int main() {
    struct Node *myList = NULL;

    insertAtBeginning(&myList, 30);
    insertAtBeginning(&myList, 20);
    insertAtBeginning(&myList, 10);

    displayLinkedList(myList);

    insertAtEnd(&myList, 40);
    insertAtEnd(&myList, 50);

    displayLinkedList(myList);

    deleteNode(&myList, 20);

    displayLinkedList(myList);

    deallocateLinkedList(myList);

    return 0;
}
