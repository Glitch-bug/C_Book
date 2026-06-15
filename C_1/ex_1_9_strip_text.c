#include <stdio.h>

/* Prints input to output and relaces strings of more than one blank with one blank */

int main(void)
{
  int blank = 0;

  for (int c = getchar(); c!= EOF;c = getchar() )
    {
      if (blank == 0){
	putchar(c);
	if (c == ' '){
	  blank = 1;
	  continue;
	}
	blank = 0;
      } else if ((blank == 1) && c != ' '){
	putchar(c);
	blank = 0;
      }
    }
}
