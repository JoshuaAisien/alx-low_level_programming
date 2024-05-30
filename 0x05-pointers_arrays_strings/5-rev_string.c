#include "main.h"

void rev_string(char *s)
{
	int temp ;
	int j;
	int i = 0;
	int count = 0;
	while (s[i] != '\0')
	{
		count++;
		i++;
}
for (i = 0, j = count - 1; i <j ; i++, j--)
{
	temp = s[i];
	s[i] = s[j];
	s[j] = temp;

}
}


