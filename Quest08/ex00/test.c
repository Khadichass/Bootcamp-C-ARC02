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

  int index = 0;
  int temp = 0;
   for (int i = 0; i < my_strlen(param_1); i++)
   {
   
      temp = str_char(&param_2[index], param_1[i]);
      if (temp == 0)
      {
        return 0;
      }
      index += temp; 
   }

    return 1;
 
   

}

int main(void)
{
  // char str[] = "hello";
  // printf("%d\n", my_strlen(str));

  char str1[] = "hhhh";
  char str2[] = "long string ?ddl";
  printf("%d\n", hidenp(str1, str2));
}