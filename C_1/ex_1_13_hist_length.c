#include <stdio.h>
#include <stdlib.h>
#define IN 1
#define OUT 0
#define BARS 15


int main() {
  int freq[BARS];
  int c, state, count, max;


  count = max = 0;
  state = 1;
  
  for (int i = 0; i < BARS; i++){
    freq[i] = 0;
  }

  while((c = getchar()) != EOF){
    if ((state == 1) && (c ==' '|| c == '\n' | c == '\t')){
      state = OUT;
      freq[count - 1] += 1;
      count = 0;
     }else {
      state = 1;
      ++count;
     }
  }
  freq[count - 1] += 1;
  count = 0;

  for (int i = 0; i < BARS; i++) {

    if (max <= freq[i]){
      max = freq[i];

    }
  }

  putchar('\n');
  
  for (int i = 0; i < max; i++) {
    for (int j = 0; j < BARS; j++) {
      if (freq[j] >= max - i){
	printf("*|");
      } else {
	printf(" |");
      }
    }
    putchar('\n');
  }

}
