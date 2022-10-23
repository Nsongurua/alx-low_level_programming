#include <stdio.h>

/**
 * main - Prints first 50 fibonacci numbers, starting with 1 and 2,
 * separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int count;
	unsigned long fibnum1 0, fibnum2 = 1, sum;
	{
		sum = fibnum1 + fibnum2;
		printf("%lu", sum);

		fibnum1 = fibnum2;
		fibnum2 = sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
