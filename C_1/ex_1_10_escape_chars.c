#include <stdio.h>

int main () {
  int backslash = '\\';
  int tab = '\t';
  int backspace = '\b';

  for (int c = getchar(); c != EOF; c = getchar()){
    if (c == backslash){
      printf("\\\\");
    } else if (c == tab){
      printf("\\t");
    }else if (c == backspace){
      printf("\\b");
    } else {
      putchar(c);
    }
  }
}
