#include <stdio.h>
#include <stdlib.h>

typedef struct mylist {
    int data;
    struct mylist* next;
} node;

void insert(node* s, int data) {
    // Traverse to the end of the list
    while (s->next != NULL) {
        s = s->next;  // Correct traversal to the next node
    }
    // Allocate memory for the new node and insert the data
    s->next = (node*)malloc(sizeof(node));
    s->next->data = data;
    s->next->next = NULL;
}

void display(node* s) {
    // Traverse and print each node's data
    while (s->next != NULL) {
        s = s->next;  // Move to the next node first
        printf("%d ", s->data);  // Print the data of the current node
    }
    printf("\n");  // Add a newline for better output formatting
}

int main() {
    // Initialize the first node
    node* first = (node*)malloc(sizeof(node));
    first->next = NULL;  // The first node does not contain valid data

    // Insert data into the list
    insert(first, 10);
    insert(first, 7);

    // Display the list
    display(first);

    // Free the allocated memory to avoid memory leaks
    node* temp;
    while (first != NULL) {
        temp = first;
        first = first->next;
        free(temp);
    }

    return 0;  // Return 0 to indicate successful completion
}
