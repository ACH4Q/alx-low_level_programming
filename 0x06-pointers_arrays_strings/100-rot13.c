#include <stdio.h>
#include <string.h>
/**
 * rot13 - Function rotate a vector from one vector to another
 *
 * @str: the vector to rotate
 * Return: the vector
 */
char *rot13(char *str)
{
	char alpha1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char alpha2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;



		for (i = 0; str[i]; i++)
		{
			for (j = 0; j < 52; j++)
			{
				if (str[i] == alpha1[j])
				{
					str[i] = alpha2[j];
					break;
				}
			}

		}

	return (str);
}
