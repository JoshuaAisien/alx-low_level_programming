#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define password_length 10

int Random_integer()
{
	return rand() % 128;
}

void generate_password(array)
{
	int i;
	for (i = 0; i < password_length; i++)
	{
		array[i] = Random_integer();
	}
	array[i] = '\0';
}

int main(void){

	int array[password_length + 1];
	srand(time(NULL));
	generate_password(array);
	printf("%s\n", password");
}