#include <stdio.h>
#include <stdlib.h>

int gloabl_var = 0;

int main(int argc, char ** argv) {
  int stack_var = 1;

  int * heap_var = malloc(sizeof(int));

  printf("Global: 0x%x\n", &gloabl_var);
  printf("Stack: 0x%x\n", &stack_var);
  printf("Heap: 0x%x\n", heap_var);
  printf("Code: 0x%x\n", &main);
  printf("Lib: 0x%x\n", &malloc);
}
