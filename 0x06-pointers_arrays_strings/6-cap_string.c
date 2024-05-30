#include "main.h"

char *cap_string(char *str)
{
	char *ptr = str;
	int capitalize_number = 0;

	while(*ptr != '\0'){

	if (*ptr == ' ' || *ptr == '\t' || *ptr == ',' || *ptr == ';' || *ptr == '.' || *ptr == '!' || *ptr == '?' || *ptr == '"'|| *ptr=='(' || *ptr ==')'|| *ptr=='{'|| *ptr=='}')
	{
		capitalize_number = 1;
	}
	else if(capitalize_number)
	{
		if (*ptr >= 'a' && *ptr <= 'z'){
		*ptr = *ptr - ('a' - 'A');
		}
		capitalize_number = 0;
	}
	ptr++;
	}
	return str;
}
