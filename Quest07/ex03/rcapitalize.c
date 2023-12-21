#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define lowerCase 1
#define upperCase 2
#define fail 0

int check(char letter)
{
  if (letter >= 'a' && letter <= 'z')
  {
    return lowerCase;
  }
  else if(letter >= 'A' && letter <= 'Z')
  {
    return upperCase;
  } 
  else
  {
    return fail;
  }

  return letter;
}
char* rcapitalize(char* param_1)
{

  for (int i = 0; param_1[i] != '\0'; i++)
  {
    if (((param_1[i + 1] == ' ') && (check(param_1[i]) == lowerCase)) || i == strlen(param_1 ) - 1)
    {
      param_1[i] = param_1[i] - 32;
    }
    
  }
  
  return param_1;
  
}

int main(void)
{
  char* str = malloc(sizeof(char) * 20);
  strcpy(str, "hello world");
  char* arr = rcapitalize(str);
  printf("%s\n", str);
}