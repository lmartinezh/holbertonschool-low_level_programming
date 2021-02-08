#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - program start
 * Description: Program that prints all base 10 single
 * digit numbers starting from 0, followed by a new line.
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

