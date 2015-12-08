#include <stdio.h>
#include <stdlib.h>

int gloabl_var = 0;

int main(int argc, char ** argv) {
  int stack_var = 1;

  int * heap_var = malloc(sizeof(int));

  printf("Global: %p\n", &gloabl_var);
  printf("Stack:  %p\n", &stack_var);
  printf("Heap:   %p\n", heap_var);
  printf("Code:   %p\n", &main);
  printf("Lib:    %p\n", &malloc);
}
