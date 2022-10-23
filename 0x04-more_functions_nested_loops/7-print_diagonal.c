#include "main.h"

/**
 * print_diagonal - drawing lines in terminal
 * @n: input variable: integer greater than zero expected
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int l, s;

	if (n <= 0)
		_putchar('\n');
	for (l = 0; l < n; l++)
	{
		for (s = 0; s < l; s++)
		{
			-putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
