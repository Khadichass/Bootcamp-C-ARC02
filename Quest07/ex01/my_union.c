#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int my_strlen(char* parametr)
{
  int length = 0;

  while (parametr[length] != '\0')
  {
    length++;
  }

  return length;
  
}
char* my_union(char* param_1, char* param_2)
{
  if (param_1 == 0 && param_2 == 0)
  {
    return 0;
  }
  char** str_arr = calloc(3, sizeof(char*));
  str_arr[0] = param_1;
  str_arr[1] = param_2;

  char* word_box = (char*)calloc((my_strlen(param_1) + my_strlen(param_2) + 1), sizeof(char));
  int index = 0;
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < my_strlen(str_arr[i]) ; j++)
    {
      if (strchr(word_box, str_arr[i][j]) == 0)
      {
        word_box[index++] = str_arr[i][j];
      }
      
    }
  } 
  free(str_arr);
  return word_box;
}

int main(void)
{
  char* box = my_union("hello", "world");
  printf("%s\n", box);
  //helowrd
}