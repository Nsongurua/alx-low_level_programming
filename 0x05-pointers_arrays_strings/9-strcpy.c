#include "main.h"
#include <stdio.h>
/**
 * _strcpy - copy the string pointed to by src to dest
 * @dest: variable to receive value
 * @src: variable to transfer value from
 * Return: 0 on success
 */
char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
		dest[a] = src[a];
	dest[a] = '\0';
	return (dest);
}
