#include "main.h"
/**
 * hsqrt - function for sqrt
 * @n: number to be squared
 * @i: number of occurrences
 * Return: number of occurrences
 */
int hsqrt(int n, int i)
{
	if (n < 0)
		return (-1);
	else if ((i * i) == n)
		return (i);
	else if ((i * i) > n)
		return (-1);

	i++;
	return (hsqrt(n, i));
}
/**
 * _sqrt_recursion - recursion function for sqrt
 * @n: number to be squared
 * Return: number of occurrences
 */
int _sqrt_recursion(int n)
{
	return (hsqrt(n, 1));
}
