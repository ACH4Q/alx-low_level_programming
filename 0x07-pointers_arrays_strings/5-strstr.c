#include "main.h"
/**
 * _strstr - function that locates a substring.
 * @haystack: the stack
 * @needle: the needle
 * Return: the pointer to the substring
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
	char *p = haystack;
	char *k = needle;

	while (*p == *k && *p != '\0')
	{
		p++;
		k++;
	}
	if (*k == '\0')
		return (haystack);
	}
	return (0);
}
