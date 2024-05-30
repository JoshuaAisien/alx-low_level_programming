#include <stdio.h>
int two = 2;
int three = 3;
int six = 6;
int main()
{
  int result = (two + three) * six / three;
  printf("i am new to programming but i know how to write arithmetic expressions (%d + %d) * %d / %d \n", two, three, six, three);
  printf("and the result of this expression is %d", result);
}