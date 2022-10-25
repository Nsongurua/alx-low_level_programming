#include "main.h"

/**
 * print_line - drawing lines in terminal
 * @n: number of times '_' is printed
 *
 * Return: void
 */

void print_line(int n)
{
	int l;

	for (l = 0; l < n; l++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
