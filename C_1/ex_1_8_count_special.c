#include <stdio.h>


int main(void)
{
  /* Count and print number of special characters */

  char newline = '\n';
  char tab = '\t';
  char blank = ' ';

  long b_count = 0;
  long  n_count = 0;
  long t_count = 0;
  
  for(int c; (c = getchar()) != EOF; ){
    if (c == newline)
      {
	n_count++;
      }
    else if (c == tab) {
      t_count++;
    } else if (c == blank) {
      b_count++;
    }
  }
  printf("\nNewlines: %ld\nTabs: %ld\nBlanks: %ld\n", n_count, t_count, b_count);
}
