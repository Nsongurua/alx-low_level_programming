#include "main h"

/**
 * print_triangle - fuction to draw a triangle
 * Description: use the hash # symbol to draw triangles of provided size
 * @size: size of the Triangle
 * Return: void
 */

void print_triangle(int size)
{
	int row, hashes, spaces;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= size; row ++)
		{
			for (spaces = size - row; spaces >= 1; spaces--)
			{
				_putchar(' ');
			}
			for (hashes = 1; hashes <= row; hashes++)
			{
				_putchar('0');
			}
			_putchar('\n');
		}
	}
}
