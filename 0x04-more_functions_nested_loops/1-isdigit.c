#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

int _isdigit(int c)
{
	if(isdigit(c))
	{
		return 1;
	}
	else
		return 0;
}