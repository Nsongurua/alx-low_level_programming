#include <stdio.h>

/**
 * main - scripting in c
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');

	return (0);
}
