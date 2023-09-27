#include "main.h"
/**
 * _pow_recursion - recursion function for _pow_recursion
 * @x: the expression to evaluate for _pow_recursion
 * @y: the exponent to evaluate for _pow_recursion
 * Return: the result
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
