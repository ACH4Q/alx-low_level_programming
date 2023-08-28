#include "main.h"
/**
 * _memcpy - Copy  n bytes from memory area src to memory area dest
 * @dest: Pointer to destination memory area
 * @src: Pointer to source memory area
 * @n: Number of bytes to copy
 * Return: None
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; n > 0 ; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
