#include <stdio.h>
#include <string.h>

//./main roberto 1
//./main roberto 3
//./main roberto 8
//./main roberto 16
//./main roberto 32

int main(int argc, char ** argv) {
  char pwd[8];
  char name[8];
  int i,n = 0;
  
  printf("Start\n");

  printf("Pointer %x\n",name);
  printf("Pointer %x\n",pwd);

  strcpy(pwd, "pwd0");
  strcpy(name, argv[1]);
  n = atoi(argv[2]);
    
  printf("Echo ");
  for (i=0; i<n && i<8; i++) {
    printf("%c", name[i]);
  }
  printf("\n",name);

 
  printf("End\n");
  return 0;
}