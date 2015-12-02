/* #pragma GCC diagnostic ignored "-Wdeprecated-declarations" */

#include <stdio.h>

void hello(char * msg) {
  char buffer[16];
  printf("&msg adr 0x%x\n", &msg);
  printf("msg adr 0x%x\n", msg);
  printf("buffer adr 0x%x\n", buffer);
  printf("enter the message for %s: \n", msg);
  printf("adr %x\n", *((unsigned int *)(buffer + 16)));
  printf("adr %x\n", *((unsigned int *)(buffer + 20)));
  printf("adr %x\n", *((unsigned int *)(buffer + 24)));
  gets(buffer);
  printf("message for %s is %s\n", msg, buffer);
  printf("adr %x\n", *((unsigned int *)(buffer + 16)));
  printf("adr %x\n", *((unsigned int *)(buffer + 20)));
  printf("adr %x\n", *((unsigned int *)(buffer + 24)));
  //*((unsigned int *)(buffer + 24)) = &hello;
  return;
}

int main(int argc, char** argv) {
  char mainTag[16] = "Roberto";
  printf("main adr 0x%x\n", &main);
  printf("hello adr 0x%x\n", &hello);
  printf("mainTag adr 0x%x\n", mainTag);
  hello(mainTag);
}
