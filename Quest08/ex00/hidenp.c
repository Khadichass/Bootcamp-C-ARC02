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

int str_char(char* str, char letter){
  for (int i = 0; i < strlen(str); i++)
  {
    if (str[i] == letter) return i;
  }
  return 0;
}

int hidenp(char* param_1, char* param_2)
{
  // int j = 0;
  // int temp = 0;

  // for (int i = 0; i < my_strlen(param_2) ; i++)
  // {
  //   temp = str_char(&param_2[i], param_1[j]);
  //   if(temp == 0)
  //   {
  //     return 0;
  //   }
  //   i += temp;
  // }

  int j = 0;
  int count = 0;
  for (int  i = 0; param_2[i]; i++)
  {
    if (param_2[i] == param_1[j])
    {
      j++;
      count++;
    }    
  }

  if (count == my_strlen(param_1))
  {
    return 1;
  }

  return 0;
}

int main(void)
{
  // char str[] = "hello";
  // printf("%d\n", my_strlen(str));

  char str1[] = " ";
  char str2[] = "long string ?ddl";
  printf("%d\n", hidenp(str1, str2));
}