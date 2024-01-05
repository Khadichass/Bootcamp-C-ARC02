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


listnode* remove_nth_node_from_end_of_list(listnode* param_1, int param_2)
{
  listnode* temp = param_1;

  param_2 = 5;

  for (int i = 0; i < param_2; i++)
  {
    if(param_1 != NULL)
    {
      printf("%d -> ", temp->val);
    }
  }
  // printf("\n");
  
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
  int count;

  listnode* head = remove_nth_node_from_end_of_list(temp, count);

  // while (head != NULL)
  // {
  //   printf("%d ->", head->val);

  //   head = head->next;
  // }
  

}