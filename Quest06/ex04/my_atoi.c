#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int my_atoi(char* param_1)
{
  int numb = 0;
  for (int i = 0; param_1[i] != '\0'; i++)
  {
    numb += param_1[i] - 48;
    numb *= 10;
  }
  
  return numb / 10;
}

int main (void)
{
  char* str = malloc(6 * sizeof(char));
  strcpy(str, "1234");
  printf("%d\n", my_atoi(str));
  return 0;
}