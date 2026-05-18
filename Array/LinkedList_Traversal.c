#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *first = NULL;
    struct node *second = NULL;

    first = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));

    first->data = 10;
    first->next = second;

    second->data = 20;
    second->next = NULL;

    while(first != NULL)
    {
        printf("%d\n",first->data);
        first = first->next;
    }

    return 0;
}