#include <stdio.h>

int my_fibonacci(int param_1)
{
  
  if (param_1 == 0)
  {
    return 0;
  }
  else if (param_1 == 1)
  {
    return 1;
  }
  else
  {
    return my_fibonacci(param_1 - 1) + my_fibonacci(param_1 - 2);
  }
  
  
}

int main(void)
{
  printf("%d\n", my_fibonacci(4));
  return 0;
}