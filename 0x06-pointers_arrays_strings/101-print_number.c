#include "main.h"

void print_number(int n)
{
	if (n< 0){
		_putchar('-');
		n = -n;
	}
	else if(n /10 ==0)
	{
		_putchar('0' + n);
		return;
	}
	print_number(n/10);
	_putchar('0' + (n % 10));
}