#include "main.h"
#include "stdio.h"

/**
 * _strncpy - Concatenate Two Arrays
 * @dest: The destination string
 * @src: The source string
 * @n: The number of bytes to copy
 * Return: The destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, len = 0;

	while (src[len] != '\0')
		len++;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	while (len < n)
	{
		dest[len] = '\0';
		len++;
	}
	return (dest);
}
