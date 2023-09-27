#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reverse array
 * @a: array to reverse
 * @n: size of array
 * Return: array
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i <= (n / 2) - 1 ; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
