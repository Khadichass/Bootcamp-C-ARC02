#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* my_strip(char* param_1)
{
  for (int i = 0; param_1[i] != '\0' ; i++)
  {
    if ( (param_1[i] == ' ') && (param_1[i + 1] == ' ') || (i == 0) && (param_1[i] == 32)) 
    {
      int j = i;
      for (; param_1[j]; j++)
      {
         param_1[j] = param_1[j+1];
      }
     param_1[j] = '\0';
     i = -1;
    }
    
  }
  if (param_1[strlen(param_1) - 1] == 32) 
  {
    param_1[strlen(param_1) - 1] = '\0';
  }
  return param_1;
}

int main(void)
{
  char* str = malloc(sizeof(char) * 50);
  strcpy(str,  "   this time it will be more complex . ");
  char* arr = my_strip(str);
  printf("%s", str);
  
}