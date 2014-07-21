#include <stdio.h>
#include <stdlib.h>

void usage(const char *program_name)
{
  printf("Usage: %s <message> <# of times to repeat>\n", program_name);
  exit(1);
}

int main(int argc, const char *argv[])
{
  int i, count;

  if (argc < 3)
    usage(argv[0]);

  count = atoi(argv[2]);
  printf("Repeating %d times..\n", count);

  for (i = 0; i < count; i++) {
    printf("%3d - %s\n", i, argv[1]);
  }
  return 0;
}
