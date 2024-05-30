#include <stdio.h>

int main(void){
  char letter;
  letter = 'a';
  while( letter <= 'z'){
    putchar(letter);
    letter++;
  }
  printf("\n");
  return (0);
}