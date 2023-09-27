#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - strpbrk function for string comparison function
 * @s: the string
 * @accept: the string to compare
 * Return: pointer to the first character that is not in @accept
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s++)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
	}

	return (NULL);
}
