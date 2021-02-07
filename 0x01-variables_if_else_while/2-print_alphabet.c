#include <stdio.h>
/**
 * main - program start
 * Description: generate a lowercase alphabet string using putchar
 * Return: 0
 */

int main(void)
{

	char letter = 'a';
	char z = 'z';

	while (letter <= z)
	{
	putchar (letter);
	letter++;
	}
	putchar ('\n');
	return (0);
}
