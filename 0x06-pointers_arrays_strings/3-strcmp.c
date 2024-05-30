#include "main.h"

int _strcmp(char *s1, char *s2)
{
	int num = 0, i = 0;
	while(num == 0){
		if ((s1[i] == '\0') && (s2[i] == '\0')){
			break;
		}
		num = s1[i] - s2[i];
		i++;
		}
	return (num);
}
