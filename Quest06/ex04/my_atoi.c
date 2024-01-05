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

// int my_atoi(char* param_1)
// {
//   int numb = 0;
//   int sign = 1; 

//   for (int i = 0; param_1[i] != '\0'; i++)
//   {
//     if (i == 0 && param_1[i] == '-')
//     {
//       sign = -1;
//     }
//     else
//     {
//       numb = numb * 10 + (param_1[i] - '0');
//     }
//   }
  
//   return numb * sign;
// }

int main (void)
{
  char* str = malloc(6 * sizeof(char));
  strcpy(str, "1234");
  printf("%d\n", my_atoi(str));
  return 0;
}