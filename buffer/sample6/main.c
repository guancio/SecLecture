/* #pragma GCC diagnostic ignored "-Wdeprecated-declarations" */

#include <stdio.h>

void hello(char * msg) {
  char buffer[128];
  printf("&msg adr %p\n", &msg);
  printf("msg adr %p\n", msg);
  printf("buffer adr %p\n\n", buffer);
  printf("enter the message for %s: \n\n", msg);
  printf("adr %p\n", *((void **)(buffer + 128)));
  printf("adr %p\n", *((void **)(buffer + 136)));

  gets(buffer);

  printf("message for %s is %s\n\n", msg, buffer);
  printf("adr %p\n", *((void **)(buffer + 128)));
  printf("adr %p\n", *((void **)(buffer + 136)));
  return;
}

int main(int argc, char** argv) {
  char mainTag[16] = "Roberto";
  printf("main adr %p\n", &main);
  printf("hello adr %p\n", &hello);
  printf("mainTag adr %p\n\n", mainTag);
  hello(mainTag);
}
