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
	char letter = 'a';
	char z = 'z';

	while (letter <= z)
	{
		if (letter == 'q')
		{
			letter++;
		}
		else
		{
			if (letter == 'e')
			{
				letter++;
			}
		}
		putchar (letter);
		letter++;
	}
	putchar ('\n');

	return (0);
}
