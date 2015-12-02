/* #pragma GCC diagnostic ignored "-Wdeprecated-declarations" */

#include <stdio.h>

/* char * x = "\x31\xc0\x48\xbb\xd1\x9d\x96\x91\xd0\x8c\x97\xff\x48\xf7\xdb\x53\x54\x5f\x99\x52\x57\x54\x5e\xb0\x3b\x0f\x05"; */
  
void hello(char * msg) {
  char buffer[128];
  printf("&msg adr 0x%x\n", &msg);
  printf("msg adr 0x%x\n", msg);
  printf("buffer adr 0x%x\n", buffer);
  printf("enter the message for %s: \n", msg);
  printf("adr %x\n", *((unsigned int *)(buffer + 128)));
  printf("adr %x\n", *((unsigned int *)(buffer + 132)));
  printf("adr %x\n", *((unsigned int *)(buffer + 136)));
  printf("adr %x\n", *((unsigned int *)(buffer + 140)));

  gets(buffer);

  /* int i; */
  /* for (i=0; i < 30; i++) { */
  /*   if (buffer[i] != x[i]) */
  /*     printf("differs in %d\n", i); */
  /*   else */
  /*     printf("equal in %d\n", i); */
  /* } */
  /* printf("end diff\n"); */

  /* (*(void(*)()) x)(); */
  /* (*(void(*)()) buffer)(); */
  printf("message for %s is %s\n", msg, buffer);
  printf("adr %x\n", *((unsigned int *)(buffer + 128)));
  printf("adr %x\n", *((unsigned int *)(buffer + 132)));
  printf("adr %x\n", *((unsigned int *)(buffer + 136)));
  printf("adr %x\n", *((unsigned int *)(buffer + 140)));
  return;
}

int main(int argc, char** argv) {
  char mainTag[16] = "Roberto";
  printf("main adr 0x%x\n", &main);
  printf("hello adr 0x%x\n", &hello);
  printf("mainTag adr 0x%x\n", mainTag);
  hello(mainTag);
}
