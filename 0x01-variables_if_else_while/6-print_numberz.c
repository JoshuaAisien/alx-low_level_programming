#include<stdio.h>

int main(){
  int numbers;
  numbers = 0;

  while (numbers < 10)
  {
    putchar(numbers + '0');
    numbers++;
  }

  putchar('\n');
  return 0;

}