#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0 to 9
 */

void times_table(void)
{
	int num, multiple, product;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');

		for (multiple = 1; multiple <= 9; multiple++)
		{
			_putchar(',');
			_putchar(' ');

			product = num * multiple;

			if (product <= 9)
				_putchar(' ');
		}
	}
}
