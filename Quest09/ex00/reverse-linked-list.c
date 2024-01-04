#include <stdlib.h>
#include <stdio.h>

#ifndef STRUCT_LISTNODE
#define STRUCT_LISTNODE
typedef struct s_listnode {
    int val;
    struct s_listnode* next;
} listnode;
#endif

listnode* reverse_linkedlist(listnode* head)
{
  listnode* prev = NULL;
  listnode* current = head;
  listnode* temp;

  while (head != NULL)
  {
    temp = head->next;
    head->next = prev;
    prev = head;
    head = temp;
  }
  
  return prev;
}

int main(void)
{
  listnode p1;
  listnode p2;
  listnode p3;
  listnode p4;

  listnode* temp = &p1;
  listnode* curnt = &p4;

  p1.val = 1;
  p2.val = 2;
  p3.val = 3;
  p4.val = 4;

  p1.next = &p2;
  p2.next = &p3;
  p3.next = &p4;
  p4.next = NULL;

  // int counter = 0;

  listnode* header = reverse_linkedlist(temp);
  while (header != NULL)
  {
    printf("%d\n", header->val);
    // counter++;
    header = header->next;

    // printf("counter:%d\n", counter);  
  }
}


