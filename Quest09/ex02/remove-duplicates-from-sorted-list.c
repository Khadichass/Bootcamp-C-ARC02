
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


listnode* remove_duplicates_from_sorted_list(listnode* param_1)
{
    listnode* head = param_1;
    while (head != NULL && head->next != NULL) 
    {
        if(head->val == head->next->val)
        {
            listnode* dupl = head->next;
            head->next = dupl->next;
        }
        else 
        {
            head = head->next;
        }
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
    numb3.val = 2;
    numb4.val = 4;

    numb1.next = &numb2;
    numb2.next = &numb3;
    numb3.next = &numb4;
    numb4.next = NULL;

    listnode* temp = &numb1;
    listnode* curr = remove_duplicates_from_sorted_list(temp);

    while (curr != NULL)
    {
        printf("%d ->", curr->val);

    curr = curr->next;
    }

}