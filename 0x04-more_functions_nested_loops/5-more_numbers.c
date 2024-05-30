#include<stdio.h>
#include<stdlib.h>
#include"main.h"
/**
 * function prints 10 times numbers from 0 -14 followed by a new line
*/

void more_numbers(void)
{
	int i;
	for (i = 0; i < 10; i++)
	{
		int j;

		for (j = 0; j < 15; j++)
		{
			if(j > 9){
				_putchar('0' + (j / 10));
			}
			_putchar('0' + (j % 10));
			}
			_putchar('\n');

		}
}