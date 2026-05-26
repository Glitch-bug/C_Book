#include <stdio.h>

/* Verifies getchar() != EOF is 0 or 1. */
int main()
{
  int  c = getchar() != EOF;
  printf("%d",c);
}
