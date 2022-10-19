#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabeth, in lowercase
 */
void print_alphabet_x10(void)
{
	int count = 0;
	char letter;

	while (count++ <= 0)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}
