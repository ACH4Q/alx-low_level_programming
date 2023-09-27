#include "main.h"

/**
 * _strcat - Concatenate Two Arrays
 * @dest: The destination string
 * @src: The source string
 * Return: The destination string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0, z;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
		j++;

	for (z = 0; z < j; z++)
	{
		dest[i + z] = src[z];
	}

	dest[i + j] = '\0';

	return (dest);
}
