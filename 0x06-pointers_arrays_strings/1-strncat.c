#include "main.h"

/** 
 * a function that concatenates two strings.
 * 
 * The _strncat function is similar to the _strcat function, *except that:
 *1. it will use at most n bytes from src; and
 *2. src does not need to be null-terminated if it contains n * or more bytes
 
*/
char *_strncat(char *dest, char *src, int n)
{
	int k = 0;
	int i, j;
	while(dest[k] != '\0')
	{
		k++;
	}
	for (i = 0, j=0; i < n && src[j] != '\0'; i++, j++)
	{
		dest[k + i] = src[j];
	}
	dest[k + i] = '\0';
	return dest;
}
		