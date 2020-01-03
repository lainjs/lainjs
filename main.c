#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>

#define PROMPT "LAINJS > "

int main()
{
  char line[256];
  int i;

  //lainjs* js;

  fputs(PROMPT, stdout);
  while (fgets(line, sizeof line, stdin)) {
    fputs(PROMPT, stdout);
  }
  return 0;
}
