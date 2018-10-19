/* #pragma GCC diagnostic ignored "-Wdeprecated-declarations" */

#include <stdio.h>

void damage(void);

void hello(char * msg) {
  char buffer[16];
  printf("&msg adr \t%p\n", &msg);
  printf("msg adr \t%p\n", msg);
  printf("buffer adr \t%p\n\n", buffer);

  printf("enter the message for %s: \n", msg);
  printf("adr \t\t%p\n", *((void **)(buffer + 16)));
  printf("adr \t\t%p\n\n", *((void **)(buffer + 24)));
  printf("adr \t\t%p\n", *((void **)(buffer + 16 + 16)));
  printf("adr \t\t%p\n\n", *((void **)(buffer + 16 + 16 + 8)));

  gets(buffer);
  printf("message for %s is %s\n", msg, buffer);
  printf("adr \t\t%p\n", *((void **)(buffer + 16)));
  printf("adr \t\t%p\n\n", *((void **)(buffer + 24)));
  printf("adr \t\t%p\n", *((void **)(buffer + 16 + 16)));
  printf("adr \t\t%p\n\n", *((void **)(buffer + 16 + 16 + 8)));
  return;
}

int main(int argc, char** argv) {
  char mainTag[16] = "Roberto";
  printf("main adr \t%p\n", &main);
  printf("hello adr \t%p\n", &hello);
  printf("damage adr \t%p\n", &damage);
  printf("mainTag adr \t%p\n\n", mainTag);
  hello(mainTag);
}

void damage(void) {
  printf("************** Self destruction activated **************");
}
