#include "holberton.h"

/**
* print_alphabet_x10 - entry point
* Description: Write a function that prints 10 time
* the alphabet, in lowercase, followed by a new line.
* Return: Always 0
*/
void print_alphabet_x10(void)
{
	char character;
	int line;

	for (line = 0; line < 10; line++)
	{
		for (character = 'a'; character <= 'z'; character++)
		{
			_putchar(character);
		}
		_putchar('\n');
	}
}
