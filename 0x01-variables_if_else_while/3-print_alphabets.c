#include<stdio.h>

int main(void){
  char lowercase;
  char uppercase;
  lowercase = 'a';
  uppercase = 'A';

  while(lowercase <= 'z'){
    putchar(lowercase);
    lowercase++;
  }

  while(uppercase <= 'Z'){
    putchar(uppercase);
    uppercase++;
  }
  return 0;
}