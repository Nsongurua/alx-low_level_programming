#include "main h"

/**
 * print_triangle - fuction to draw a triangle
 * Description: use the hash # symbol to draw triangles of provided size
 * @size: size of the Triangle
 * Return: void
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (k = size - i; k >= 1; k--)
			{
				_putchar(' ');
			}
			for (j = 1; j <= row; j++)
			{
				_putchar('0');
			}
			_putchar('\n');
		}
	}
}
