#include <stdio.h>

int my_iterative_pow(int param_1, int param_2)
{
  int result = 1;

  for(int i = 1; i <= param_2; i++)
  {
    result = result * param_1;
    
  }

  return result;
}

int main(void)
{
  printf("%d\n", my_iterative_pow(2,3));

  return 0;
}