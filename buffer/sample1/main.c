#include <stdio.h>
#include <string.h>

//./main roberto hello
//./main roberto pwd0
//./main 12345678hello hello
//./main 1234567812345678hello hello

int main(int argc, char ** argv) {
  char pwd[8];
  char name[8];
  
  printf("Start\n");

  strcpy(pwd, "pwd0");
  strncpy(name, argv[1]);
  
  printf("Hello %s\n",name);
  printf("PWD %s\n",pwd);
  printf("Pointer %x\n",name);
  printf("Pointer %x\n",pwd);

  if (strcmp(pwd, argv[2]))
    printf("non authorized\n");
  else
    printf("authorized\n");
 
  printf("End\n");
  return 0;
}
