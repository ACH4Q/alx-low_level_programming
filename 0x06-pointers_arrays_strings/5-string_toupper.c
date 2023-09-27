#include "main.h"
#include <stdio.h>
/**
 * string_toupper - Function to convert string to upper case
 * @str: string to convert
 * Return: string
 */
char *string_toupper(char *str)
{
	int i;
	int len = 0;

	while (str[len] != '\0')
		len++;
	for (i = 0; i < len; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] -=  32;
		}
	}
	return (str);
}
