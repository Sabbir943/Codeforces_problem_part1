#include<stdio.h>
#include<stdlib.h>
typedef struct mylist
{
    int data;
    struct mylist *next;
}node;
int main()
{
    node *first=(node*)malloc(sizeof(node));
    node *second=(node*)malloc(sizeof(node));
    node *third=(node*)malloc(sizeof(node));
    node *fourth=(node*)malloc(sizeof(node));
    node *fifth=(node*)malloc(sizeof(node));

    first->data=8;
    second->data=7;
    third->data=-2;
    fourth->data=1;
    fifth->data=9;
    first ->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=NULL;
}
