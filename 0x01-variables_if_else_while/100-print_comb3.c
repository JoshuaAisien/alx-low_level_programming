#include<stdio.h>

int main(){
  
  int final;
  final = 0;

  while(final <= 100){

    int tens;
    int units;

    tens = final / 10;
    units = final % 10;

    if( tens < units){
      putchar(tens + '0');
      putchar(units + '0');
      if( final != 89){
      putchar(',');
      putchar(' ');
      }
    }
    final++;
  }
  putchar('\n');
  return 0;
}