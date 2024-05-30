#include <stdio.h>
/**
 * main: entry point
 * print size of various data types to the output
*/
int main ()
{
  printf("size of char: %zu bytes(s): \n", sizeof(char));
  printf("Size of an int: %zu bytes(s)\n", sizeof(int));
  printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
  printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
  printf("Size of a float: %zu byte(s)\n", sizeof(float));
  return 0;
}