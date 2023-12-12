#include <stdio.h>

int my_recursive_pow(int p1, int p2)
{
  if(p2 < 0)
  {
    return 0;
  }
  else if (p2 == 0)
  {
    return 1;
  }
  else if (p2 == 1)
  {
    return p1;
  }
  else
  {
    return p1 * my_recursive_pow(p1, p2 - 1);
  }
}

int main(void)
{
  int a = 3;
  int b = 3;

  
  printf("%d\n", my_recursive_pow(a,b));

  return 0;
}