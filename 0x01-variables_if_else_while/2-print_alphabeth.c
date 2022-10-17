#include <stdlib.h>
#include <stdio.h>

/**
 * main - scripting in c
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int a;

	a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}

	putchar('\n');

	return (0);
}
