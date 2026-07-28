#include <stdio.h>

int main() {
  int chars[7];
  int c;
  int max = 0;

  for (int i = 0; i < 7; i++){
    chars[i] = 0;
  }
  
  while ((c = getchar()) != EOF){
    if ((c >= 65) && (c <= 72)) {
      chars[c-65] += 1;
      if (max < chars[c-65]) max += 1;
    }else if ((c >= 97) && (c <= 104)) {
      chars[c-97] += 1;
      if (max < chars[c-97]) max += 1;
    }
  }
  
  printf("\n");

  for (int i = max; i > 0; i--){
    for (int j = 0; j < 7; j++) {
      if(chars[j] >= i){
  	printf("*");
      }else {
  	printf(" ");
      }
    }
    printf("\n");
  }
}
