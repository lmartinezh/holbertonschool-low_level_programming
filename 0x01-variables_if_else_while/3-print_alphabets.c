#include <stdio.h>
/**
 * main - program start
 * Description: print a lowercase and uppercase alphabet string using putchar
 * Return: 0
 */

int main(void)
{

	char letter = 'a';
	char z = 'z';
	char upL = 'A';
	char zUp = 'Z';

	while (letter <= z)
	{
	putchar (letter);
	letter++;
	}
	while (upL <= zUp)
	{
	putchar (upL);
	upL++;
	}
	putchar ('\n');

	return (0);
}
