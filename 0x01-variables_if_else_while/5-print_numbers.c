#include<stdio.h>
/**
 * main: entry point of code
 * functio: prints all numbers from 0-10
 * 
*/
int main(){
  int number;
  number = 0;

  while(number <= 10 ){
    printf("%d\n", number);
    number++;
  }

  printf("\n");
  return 0;
}