#include "main.h"

/**
 * _strncpy - function that copies a string
 *
 * @src: The source of strings
 * @dest: The destination of the string
 * @n: The amount of bytes
 *
 * Return: pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *arc, int n)
{
int i:

	for (i = 0; i < n && src[i] != '\0'; i++}
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
