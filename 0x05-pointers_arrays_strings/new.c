#include<stdio.h>
#include<stdlib.h>

void get(int n)
{
	if(n<1)
		return;
	get(n - 1);
	get(n - 3);
	printf("%u", n);
}

int main()
{
	int n = 6;
	get(n);
	printf(" \n");
	return 0;
}