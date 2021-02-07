#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - function that starts the program
 *
 * Return: generate string of numbers
 */
int main(void)
{
	int n = 0;
	int lastD;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastD = n % 10;

	if (lastD > 5)
	{
	printf("and is greater than 5\n");
	}
	else if (lastD == 0)
	{
	printf("and is 0\n");
	}
	else
	{
	printf("and is less than 6 and not 0\n");
	}
	return (0);


}
