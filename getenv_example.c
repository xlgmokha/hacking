#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
  printf("%s is at %p\n", argv[1], getenv(argv[1]));
  return 0;
}
