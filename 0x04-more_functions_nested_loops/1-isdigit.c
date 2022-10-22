#include "main.h"

/**
 * _isdigit - a function that checks if a character is digit or not.
 * @c: char to check
 * Return: 0 or 1
 **/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
