#include <stdio.h>
/**
 * main - program start
 * Description: Program that prints all base 10 single
 * digit numbers starting from 0, followed by a new line.
 * Return: 0
 */

int main(void)
{
	int ch;

	for (ch = '0' ; ch <= '9' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
