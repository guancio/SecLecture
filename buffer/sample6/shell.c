#include <unistd.h>
int main(int argc, char ** argv) {
  char * sh = "/bin/sh";
  char * args[2];
  args[0] = sh;
  args[1] = NULL;
  execve(sh, args, NULL);
}
