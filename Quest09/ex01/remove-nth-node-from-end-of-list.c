#include <stdio.h>
#include <stdlib.h>

#ifndef STRUCT_LISTNODE
#define STRUCT_LISTNODE
typedef struct s_listnode
{
 int val;
 struct s_listnode* next;
} listnode;
#endif

int my_length(listnode* head)
{
  listnode* header = head;
  int count = 0;
  while (header != NULL)
  {
    count++;
    header = header->next;
  }

  return count;
}

listnode* remove_nth_node_from_end_of_list(listnode* param_1, int param_2)
{
  
  listnode* temp = param_1;

  int index = 0;
  int length = my_length(param_1);
  printf("----%d----\n", length);
  if (length == param_2)
  {
    temp = temp->next;
    return temp;
  }
  while (temp != NULL)
  {
    index++;
    if ((index + 1) == length - param_2 + 1)
    {
      temp->next = temp->next->next;
    }
    temp = temp->next;
  }

  return param_1;
}


int main()
{
  listnode numb1;
  listnode numb2;
  listnode numb3;
  listnode numb4;

  numb1.val = 1;
  numb2.val = 2;
  numb3.val = 3;
  numb4.val = 4;

  numb1.next = &numb2;
  numb2.next = &numb3;
  numb3.next = &numb4;
  numb4.next = NULL;

  listnode* temp = &numb1;

  // int head = my_length(temp);

  // printf("%d\n", head);

  listnode* curr = remove_nth_node_from_end_of_list(temp, 1);

  // printf("%d\n", curr->val);
  while (curr != NULL)
  {
    printf("%d ->", curr->val);

    curr = curr->next;
  }

}