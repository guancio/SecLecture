#include <stdio.h>

void payload() {
  //char message[20] = "HELLO!'n";
  //printf(message);
  return;
}

int main(int argc, char ** argv) {
  char * x = (char *)&payload;
  int i;
  for (i=0; i<100; i++) {
    printf("%c", *x);
    //printf("%c", 0xc3);
    x++;
  }
  return 0;
}
