#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void main(int argc, char ** argv) {
  char name[8];
  char pwd[8];
  int i,n = 0;

  strcpy(pwd, "pwd0");
  strcpy(name, argv[1]);
  n = atoi(argv[2]);

  printf("Echo ");
  for (i=0; i<n; i++) {
    printf("%c", name[i]);
  }
  printf("\n");
}
