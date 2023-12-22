#include <stdio.h>

int is_anagram(char* param_1, char* param_2)
{
  int index1 = 0;
  int index2 = 0;
  int i ;

  for (int  i = 0; param_1[i] && param_1[i]; i++)
  {
    param_1[index1++];
    param_2[index2++];
  }

  printf("%c\n", param_1[i]);
  if (param_1[i] == param_2[i])
  {
    return 1;
  }
  else
  {
    return 0;
  }
  
}

int main(void)
{
  printf("%d\n", is_anagram("ram", "arm"));
}