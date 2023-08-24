#include "main.h"
/**
 * _strcmp - compare two strings
 * @s1: string 1
 * @s2: string 2
 * Return: Integer
 */


int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (1)
	{
		if (s1[i] > s2[i] || s2[i] > s1[i])
			return (s1[i] - s2[i]);
		if (s1[i] == '\0' && s2[i] == '\0')
		{
			return (0);
		}
		i++;
	}
}
