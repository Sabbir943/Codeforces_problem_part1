#include<stdio.h>
#include<stdlib.h>
typedef struct mylist
{
    int data;
    struct mylist *next;
}node;
void insert (node *s,int data)
{
    while(s->next !=NULL)
    {
        s=s->next;
    }
    s->next=(node*)malloc(sizeof(node));
    s->next->data=data;
    s->next->next=NULL;
}
void display(node *s)
{
 while(s->next!=NULL)
 {
     printf("%d\n",s->next->data);
     s=s->next;
 }
}
void search(node *s,int search)
{
    int count=0;
    while(s->next!=NULL)
    {
        if(s->next->data==search)
        {
            count++;
        }
        s=s->next;
    }
}
void deleteNode(node*s,int data)
{
    while(s->next!=NULL)
    {
        if(s->next->data==data)
        {
            s->next=s->next->next;
            return 0;
        }
        s=s->next;
    }
}
int main()
{
 node *first=(node*)malloc(sizeof(node));
 first ->next=NULL;
 insert (first,9);
 insert (first,19);
 insert (first,7);
 insert (first,15);
 display(first);
 search(first,11);
 deleteNode(first,7);
 display(first);
}

