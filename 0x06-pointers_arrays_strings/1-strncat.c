#include "main.h"

/**
 * _strncat - function to concatenate two strings
 * 
 * @src: The source of strings
 * @dest: The destination of the string
 * @n: amount of bytes used from src
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
	       	i++;
	}

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}

