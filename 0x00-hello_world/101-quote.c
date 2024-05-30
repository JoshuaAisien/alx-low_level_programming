#include<stdio.h>
#include<unistd.h>
/**
 * main: entry point 
 * do the following : and that piece of art is useful" - Dora Korpar, 2015-10-19, followed by a new line, to the standard error.
 * not allowed to use printf or puts
 * Your program should return 1
*/

int main()
{
  const char size[] = "and that piece of art is useful\" - Dora Korpar, 2015 - 10 - 19\n";
  write(2, size, sizeof(size));
  return (1);
}
