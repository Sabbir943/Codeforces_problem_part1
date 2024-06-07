#include <stdio.h>
#include <stdlib.h>

// Definition of the Node structure
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node with the given data
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to add a new node at the beginning of the linked list
void pushNode(struct Node** head_ref, int data) {
    struct Node* newNode = createNode(data);
    newNode->next = *head_ref;
    *head_ref = newNode;
}

// Function to find the middle of the linked list
int getMiddle(struct Node* head) {
    if (head == NULL) return -1; // Handle the case when the list is empty

    struct Node* slow_ptr = head;
    struct Node* fast_ptr = head;

    // Move fast_ptr by two and slow_ptr by one
    while (fast_ptr != NULL && fast_ptr->next != NULL) {
        fast_ptr = fast_ptr->next->next;
        slow_ptr = slow_ptr->next;
    }

    // slow_ptr now points to the middle node
    return slow_ptr->data;
}

int main() {
    struct Node* head = NULL;
    int i;
    for (i = 5; i > 0; i--) {
        pushNode(&head, i);
    }
    printf("Middle Value Of Linked List is: %d\n", getMiddle(head));

    // Free allocated memory (important in C to avoid memory leaks)
    struct Node* current = head;
    struct Node* next;
    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }

    return 0;
}

