#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#ifndef STRUCT_LISTNODE
#define STRUCT_LISTNODE
typedef struct s_listnode
{
    int val;
    struct s_listnode* next;
} listnode;
#endif

#ifndef STRUCT_LISTNODE_ARRAY
#define STRUCT_LISTNODE_ARRAY
typedef struct s_listnode_array
{
    int size;
    listnode **array;
} listnode_array;
#endif

void sort_arr(listnode** head);

void my_swap(int* p1, int* p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;

}

void add_list(listnode** header, int value)
{
    listnode* list_1 = malloc(sizeof(listnode));
    
    list_1->val = value;
    list_1->next = NULL;

    if (*header == NULL) {
        *header = list_1;
    }
    else {
        listnode* temp = *header;
        while (temp->next != NULL) {
            temp = temp->next;
        }

        temp->next = list_1;
    }

    
}

listnode* merge_k_sorted_lists(listnode_array* param_1)
{
    listnode* current = NULL;
    

    for (int i = 0; i < param_1->size; i++) 
    {
        listnode* temp = param_1->array[i];
        while (temp != NULL) {
            add_list(&current, temp->val);
            temp = temp->next;
        }

    }

    sort_arr(&current);
    
    return current;
}

void sort_arr(listnode** head)
{
    listnode* temp;
    temp = *head;
    int index = 0 ;
    while(temp != NULL)
    {
        listnode* i = temp->next;
        while(i != NULL)
        {

            if(temp->val > i->val)
            {
               my_swap(&temp->val, &i->val); 
            }

            i = i->next;
        }

        temp = temp->next;
    }
}

int main()
{
    listnode_array head;

    head.size = 3;
    head.array = malloc(sizeof(listnode* ) * 3);
    
    // array[0]
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

    head.array[0] = &numb1; 
    // array[0]


    // array[1]
    listnode numb5;
    listnode numb6;
    listnode numb7;
    listnode numb8;

    numb5.val = 1;
    numb6.val = 2;
    numb7.val = 3;
    numb8.val = 4;

    numb5.next = &numb6;
    numb6.next = &numb7;
    numb7.next = &numb8;
    numb8.next = NULL;

    head.array[1] = &numb5;
    // array[1]
    

    // array[2]
    listnode numb9;
    listnode numb10;
    listnode numb11;
    listnode numb12;

    numb9.val = 1;
    numb10.val = 2;
    numb11.val = 3;
    numb12.val = 4;

    numb9.next = &numb10;
    numb10.next = &numb11;
    numb11.next = &numb12;
    numb12.next = NULL;

    head.array[2] = &numb9; 
    // array[2]


    listnode* list = merge_k_sorted_lists(&head);

    while (list != NULL) {
        printf("%d\n", list->val);
        list = list->next;
        // sleep(1);
    }

}