#include <stdlib.h>
#include <time.h>
/**
*main - function that starts the program
*
*Description: This program generates a number and
*prints it if it is zero, negative, or positive.
*return: positive or negative number
**/
int main(void)
{

	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)

	{
	printf("%d is positive\n", n);
	}

	else if (n == 0)

	{
	printf("%d is zero\n", n);
	}

	else if (n < 0)

	{
	printf("%d is negative\n", n);
	}

	return (0);
}
