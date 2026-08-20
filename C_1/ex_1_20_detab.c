#include <stdio.h>
#define N_BLANKS 8



float remains(float a, float b);
/* A program detab that replaces tabs with the appropriate number of blanks to replace them  */

int main() {
  int c;
  int pos = 0;
  int dif;

  while((c = getchar()) != EOF) {
    if (c == '\n') {
      pos = 0;
      putchar(c);
    } else if (c == '\t') {
      dif = 8 - remains(pos, N_BLANKS);
      for (int i = 0; i < dif; i++) {
	putchar(' ');
	pos++;
      }
    }else {
      putchar(c);
      pos++;
    }
    
  }
  c = remains(2, 8);
}


float remains(float dividend, float divisor) {
  float temp;
  int sub;
  int rem;

  temp = dividend / divisor;
  sub = temp;
  temp = temp - sub;

  rem = temp * divisor;
  return rem;
}



