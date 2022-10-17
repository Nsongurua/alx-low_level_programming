#include <stdlib.h>
#include <stdio.h>

/**
 * main - scripting in c
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int a;
	int b;

	a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}

	for (b = 'A'; b <= 'Z'; b++)
	{
		putchar(b);
	}

	putchar('\n');

	return (0);
}
