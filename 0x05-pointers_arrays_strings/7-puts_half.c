#include "main.h"

void puts_half(char *str)
{
	int i = 0;
	int n;
	int length_of_the_string = 0;

	while(str[length_of_the_string] != '\0'){
		length_of_the_string++;
	}


	if (length_of_the_string != 0)
	{
		n = (length_of_the_string - 1) / 2;

	}
	if (length_of_the_string == 0)
	{
		n = (length_of_the_string) / 2;
	}
	for (i = n+1; i < length_of_the_string; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}