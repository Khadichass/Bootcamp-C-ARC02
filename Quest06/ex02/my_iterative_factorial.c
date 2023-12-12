#include <stdio.h>

int my_iterative_factorial(int param_1)
{
  int factorial_num = 1;
  
  for (int i = 1; i <= param_1; i++)
  {
   factorial_num = i * factorial_num;
  }
  
  return factorial_num;
}

int main(void)
{
  printf("%d\n", my_iterative_factorial(5));
  return 0;
}


