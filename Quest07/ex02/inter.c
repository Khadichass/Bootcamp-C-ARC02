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

char* inter(char* param_1, char* param_2)
{
  if (param_1 == 0 && param_2 == 0)
  {
    return 0;
  }

  char* box = (char*) calloc((my_strlen(param_1) + 1), sizeof(char));

  int index = 0;
  for (int i = 0; param_1[i]; i++)
  {
    for (int j = 0; param_2[j]; j++)
    {
      if ((param_1[i] == param_2[j]) && (strchr(box, param_2[j]) == 0) )
      {
        box[index++] = param_1[i];
      }
    }
  }
  return box;
}

int main()
{
  char* str = inter("hello", "world");
  printf("%s\n", str);
}