#include "main.h"

/**
 * _strlen -returns the length of a string
 * @s: char to check
 * Description: this will return the length of a string
 *
 * Return: 0 always (success)
 */
int _strlen(char *s)
{
	int a;

	for (a = 0; *s++;)
		a++;
	return (a);
}