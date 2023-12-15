#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct user
{
  char* name;
  char* surname;
  int age;
} Point ;

int main()
{
  Point user_info;
  user_info.name = malloc(sizeof(char) * 8);
  user_info.surname = malloc(sizeof(char) * 14);
  strcpy(user_info.name, "Hadicha");
  strcpy(user_info.surname, "Abdurashidova");
  user_info.age = 18;

  printf("%s, %s, %d\n", user_info.name, user_info.surname, user_info.age);

  Point* ptr = malloc(sizeof(Point));
  
  ptr->name = malloc(sizeof(char) * 6);
  ptr->surname = malloc(sizeof(char) * 6);

  strcpy(ptr->name, "Aysha");
  strcpy(ptr->surname, "Aysha");
  ptr->age = 9;
  printf("%s, %s, %d\n", ptr->name, ptr->surname, ptr->age);

  free(ptr->name);
  free(ptr->surname);
  free(ptr);

}