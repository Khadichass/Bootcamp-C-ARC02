#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int char_counter(char* str, char letter)
{
  int counter = 0;
  for (int i = 0; str[i]; i++)
  {
    if(str[i] == letter)
    {
      counter++;
    }
  }
  return counter;
}

int is_anagram(char* param_1, char* param_2)
{ 
  char** arr = calloc(3, sizeof(char*));
  arr[0] = param_1;
  arr[1] = param_2;

  char* my_unique =(char*) calloc((strlen(param_1) + strlen(param_2) + 1), sizeof(char));

  int index = 0;
  int i;

  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < strlen(arr[i]) ; j++)
    {
      if (strchr(my_unique, arr[i][j]) == 0)
      {
        my_unique[index++] = arr[i][j];
      }
      
    }
  } 

  printf("%s\n", my_unique);

  int my_count1 = 0;
  int my_count2 = 0;
  for (int i = 0; i < strlen(my_unique); i++)
  {
    my_count1 = char_counter(param_1, my_unique[i]);
    my_count2 = char_counter(param_2, my_unique[i]);

    if (my_count1 != my_count2)
    {
      return 0;
    }
  }
  
  return 1;
}

int main(void)
{
  printf("%d\n", is_anagram("ram", "marm"));
}