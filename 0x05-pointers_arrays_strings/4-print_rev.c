#include "main.h"

void print_rev(char *s)
{
	int count;
	int i;
	while(*s != '\0')
	{
		s++;
		count++;
	}
	int i;
	for (i = count - 1; i >= 0; i--)
	{
		s--;
		_putchar(*s);
	}
	_putchar('\n');
}