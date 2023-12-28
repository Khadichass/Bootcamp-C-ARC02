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
    for (int i = 0; i < my_strlen(param_2); i++)
    {
      int j;
      for (j = 0; j < my_strlen(param_1); j++)
      {
        if (param_1[j] != param_2[i + j]) return 0;
      }
      if (j == my_strlen(param_1)) return 1; 
    }

    return 0;
  

}

int main(void)
{
  // char str[] = "hello";
  // printf("%d\n", my_strlen(str));

  char str1[] = "low";
  char str2[] = "hello";
  printf("%d\n", hidenp(str1, str2));
}