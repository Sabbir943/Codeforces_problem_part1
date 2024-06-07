#include <stdio.h>
#include <stdlib.h>

typedef struct mylist {
    int data;
    struct mylist* next;
} node;

void insert(node* s, int data) {
    while (s->next != NULL) {
        s = s->next;
    }
    s->next = (node*)malloc(sizeof(node));
    s->next->data = data;
    s->next->next = NULL;
}

void display(node* s) {
    while (s->next != NULL) {
        printf("%d\n", s->next->data);
        s = s->next;
    }
}

int search(node* s, int search) {
    int count = 0;
    while (s->next != NULL) {
        if (s->next->data == search) {
            count++;
        }
        s = s->next;
    }
    return count;
}

void deleteNode(node* s, int data) {
    node* prev = s;
    node* curr = s->next;

    while (curr != NULL) {
        if (curr->data == data) {
            prev->next = curr->next;
            free(curr);
            return;
        }
        prev = curr;
        curr = curr->next;
    }
}

int main() {
    node* first = (node*)malloc(sizeof(node));
    first->next = NULL;

    insert(first, 9);
    insert(first, 19);
    insert(first, 7);
    insert(first, 15);

    printf("Initial list:\n");
    display(first);

    int found = search(first, 11);
    if (found > 0) {
        printf("Element 11 found %d times in the list.\n", found);
    } else {
        printf("Element 11 not found in the list.\n");
    }

    deleteNode(first, 7);
    printf("List after deleting 7:\n");
    display(first);

    // Free the allocated memory
    node* temp;
    while (first != NULL) {
        temp = first;
        first = first->next;
        free(temp);
    }
    return 0;
}
