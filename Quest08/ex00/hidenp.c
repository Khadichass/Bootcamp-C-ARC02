#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int my_strlen(char* p1)
{
  int length = 0;
  while (p1[length] != '\0')
  {
    length++;
  }

  return length; 
}

int hidenp(char* param_1, char* param_2)
{
  char** arr = malloc((my_strlen(param_1) + my_strlen(param_2) + 1) * sizeof(char*));
  arr[0] = param_1;
  arr[1] = param_2;

  int index = 0;

  for (int i = 0; i < 3; i++)
  {
    for (int i = 0; param_1[i] != '\0'; i++)
    {
      index++;
    }

    for (int i = 0; param_2[i] != '\0'; i++)
    {
      index++;
    }
    
    if (strchr())
    {
      
    }
    
  }
  
  
}

int main(void)
{
  char str[] = "hello";
  printf("%d\n", my_strlen(str));
}