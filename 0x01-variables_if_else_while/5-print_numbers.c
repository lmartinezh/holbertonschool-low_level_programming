#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - program start
 * Description: print alphabet character string excluding letters "q" and "e"
 * Return: 0
 */

int main(void)
{
	int number = 0;
	int max = 9;

	while (number <= max)
	{
		printf("%d", number);
		number++;
	}
	putchar ('\n');

	return (0);
}

