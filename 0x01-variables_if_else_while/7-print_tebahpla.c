#include<stdio.h>
/**
 * main: entry point
 * function:  a program that prints the lowercase alphabet in reverse, followed by a new line.
*/
int main(){
  char letters;
  letters = 'z';

  while( 'a' <= letters){
    putchar(letters);
    letters--;
  }
  putchar('\n');
  return 0;
}