#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
   char** arr;
   int size; 
} string_array;


int size_arr(char* str, char letter)
{
    int i = 0;
    int size = 0;
    while (str[i])
    {
        if (str[i] == letter)
        {
            size++;
        }
        i++;
    }
    return size + 1;
}

string_array* my_split(char* param_1, char* param_2)
{
    string_array* arrs = malloc(sizeof(string_array));
    arrs->size = size_arr(param_1, *param_2);
    arrs->arr = malloc(sizeof(char*) * (arrs->size + 1));
    arrs->arr[0] = malloc(sizeof(char) * (strlen(param_1) + 1));
    int arr_index = 0;
    int let_index = 0;

    for (int i = 0; i < strlen(param_1); i++)
    {
        if (param_1[i] == *param_2)
        {
            let_index = 0;
            arr_index++;
            arrs->arr[arr_index] =  malloc(sizeof(char) * (strlen(param_1) + 1));
        }
        else 
        {
            arrs->arr[arr_index][let_index] = param_1[i];
            let_index++;
        }
    }

    return arrs;
    
}


int main(void) {
    string_array *str;

    str = my_split("Hello World !", " ");
    for (int i = 0; i < str->size; i++)
    {
        printf("%s\n", str->arr[i]);   
    }


}
