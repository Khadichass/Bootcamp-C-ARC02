#include <stdio.h>
#include <stdlib.h>

struct node 
{
    struct node* prev;
    int data;
    struct node* next;
};

int main(void)
{
    struct node *head = malloc(sizeof(struct node));
    head->prev = NULL;
    head->data = 1100;
    head->next = NULL;

    while(head != NULL)
    {
        printf("%d\n", head->data);
        head = head->next;
    }
}