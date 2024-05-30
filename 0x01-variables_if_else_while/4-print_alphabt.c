#include<stdio.h>
/**
 * main: entry point 
 * prints all lowercase letters except 'q' and 'e'
*/
int main (void){

  char lowercase;
  lowercase = 'a';

  while (lowercase <= 'z'){
    if (lowercase != 'q' && lowercase != 'e'){/* checking for 'q' and 'e' */
      putchar(lowercase);
    }
    lowercase++;
  }
  putchar('\n');
  return 0;
}