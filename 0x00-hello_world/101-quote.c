#include <unistd.h>
/**
 * main - scripting in c to Prints "and that piece of art is useful"
 *
 * Return: 1 Always
*/
int main(void)
{
	write(2,
		"and that piece of art is useful\" - Dora korpar, 2015-10-19\n", 59);
	
	return (1);
}
