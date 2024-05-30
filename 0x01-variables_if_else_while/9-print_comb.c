#include <stdio.h>

int main(){
  int number;
  number = 0;
  
  while(number <= 9){
    putchar(number + '0');
    if(number != 9){
      putchar(',');
      putchar(32);
    }
    number++;
    }
  putchar('\n');
  return 0;
}