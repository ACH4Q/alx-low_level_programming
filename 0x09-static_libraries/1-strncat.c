#include "main.h"
/**
 * _strncat - Concatenates two strings up to n bytes.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * @n: The maximum number of bytes to be copied from src.
 * Return: Pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	int length1, length2;

	length1 = 0;
	length2 = 0;
	while (src[length1] != '\0')
	{
		length1++;
	}
	while (dest[length2] != '\0')
	{
		length2++;
	}

	for (i = length2; i < length1 + length2; i++)
	{
		for (j = 0; j < length1; j++)
		{
			if (j < n)
			{
				dest[i] = src[j];
			}
			i++;
		}
	}
	dest[i] = '\0';
	return (dest);
}
