#include <stdio.h>
#include <string.h>

// sudo echo 0 > /proc/sys/kernel/randomize_va_space

// ./main main.c 10
// ./main main.c 1234567
// Depends if it is 8 byte or more
// ./main main.c 12345678
// ./attacker 12345678 -16128 > inp1.txt
// ./attacker 12345678 4294951172 > inp1.txt
// (cat < inp1.txt) | xargs --null ./main main.c
// ./payload > inp2.txt
// (cat < inp1.txt) | xargs --null ./main inp2.txt


#define BSIZE (1024*8)
char * buffer1;

void std_function(int n) {
  int i;
  printf("Standard function %d\n", n);
  for (i=0; i<n && i<BSIZE; i++) {
    printf("%c",buffer1[i]);
  }
  printf("\n");
  printf("End of standard function\n");
}

int main(int argc, char ** argv) {
  char buffer[BSIZE];
  char buffer2[BSIZE];

  void (*functionPtr)(int) = &std_function;
  char input[8];
  int n;
  FILE * fd;

  buffer1 = buffer;
  
  printf("Start\n");

  printf("Pointer to functionPtr 0x%x\n",&functionPtr);
  printf("Pointer to input 0x%x\n",input);
  printf("Pointer to n 0x%x\n",&n);
  printf("Pointer to buffer 0x%x\n",buffer);
  printf("Pointer to buffer %d\n",buffer);

  fd = fopen(argv[1], "r");
  n = fread(buffer, sizeof(char), BSIZE, fd);
  fclose(fd);
  printf("read %d bytes\n", n);
  
  printf("functionPtr %x\n",functionPtr);

  strcpy(input, argv[2]);

  printf("functionPtr %x\n",functionPtr);
  
  n = atoi(input);
  
  std_function(n);
  (*functionPtr)(n);
 
  printf("completed\n");
  return 0;
}
