#include <stdio.h>

int my_iterative_pow(int param_1, int param_2)
{
  int result = 1;

  if (param_2 < 0)
  {
    return 0;
  }
  else
  {
    for(int i = 1; i <= param_2; i++)
    {
      result = result * param_1;
      
    }
  }
  

  return result;
}

int main(void)
{
  printf("%d\n", my_iterative_pow(2,4));

  return 0;
}