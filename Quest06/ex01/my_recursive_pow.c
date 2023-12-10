#include <stdio.h>

int my_recursive_pow(int param_1, int param_2)
{
  int result = 1;
  if (param_2 < 0)
  {
    return 0;
  }
  else
  {
    return result * my_recursive_pow(param_1, param_2 - 1) ;
  }
}

int main(void)
{
  int a = 2;
  int b = 3;

  printf("%d\n", my_recursive_pow(a,b));

  return 0;
}