#include <stdio.h>
#include <stdlib.h>
#include "main.h"

void print_triangle(int size)
{
	int i;
	int j;
	if (size == 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 1; i <= size; i++)
	{
		
		for (j = size - i; j >= 0; j--)
		{
			_putchar(' ');
		}
		for (j = 0; j < i; j++)
			_putchar('#');
		_putchar('\n');
	}
	
}