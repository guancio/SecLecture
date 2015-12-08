/* #pragma GCC diagnostic ignored "-Wdeprecated-declarations" */

#include <stdio.h>

void hello(char * msg) {
  char buffer[16];
  printf("&msg adr %p\n", &msg);
  printf("msg adr %p\n", msg);
  printf("buffer adr %p\n", buffer);
  printf("enter the message for %s: \n", msg);
  printf("adr %p\n", *((void **)(buffer + 16)));
  printf("adr %p\n", *((void **)(buffer + 24)));
  gets(buffer);
  printf("message for %s is %s\n", msg, buffer);
  printf("adr %p\n", *((void **)(buffer + 16)));
  printf("adr %p\n", *((void **)(buffer + 24)));
  //*((unsigned int *)(buffer + 24)) = &hello;
  return;
}

int main(int argc, char** argv) {
  char mainTag[16] = "Roberto";
  printf("main adr %p\n", &main);
  printf("hello adr %p\n", &hello);
  printf("mainTag adr %p\n", mainTag);
  hello(mainTag);
}
