#include <stdlib.h>
#include <stdio.h>

/**
 * main - scripting in c
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int z;

	z = 'z';

	while (z >= 'a')
	{
		putchar(z);
		++z;
	}

	putchar('\n');

	return (0);
}
