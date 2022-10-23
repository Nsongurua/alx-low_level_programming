#include <stdio.h>
#include <main.h>

/**
 * main - entry point
 * description: prints the numbers 1 - 100
 * substitute Fizz for multiples of 3, Buzz for multiples of 5,
 * and FizzBuzz for multiple of both 3 and 5 i.e 15
 * Return: Always (0)
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 15 == 0)
			printf("FizzBuzz");
		else if (n % 3 == 0)
			printf("Fizz");
		else if (n % 5 == 0)
			printf("Buzz");
		else
			printf("%i",n);
		if (n < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
