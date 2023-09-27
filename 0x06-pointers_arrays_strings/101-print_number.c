#include "main.h"
/**
 * print_number - print a number
 * @n: number to print
 * return: number
 */
void print_number(int n)
{
	if (n == -2147483648)
	{
		_putchar('-');
		_putchar('2');
		print_number(147483648);
	}
	else if (n < 0)
	{
		_putchar('-');
		print_number(-n);
	}
	else if (n >= 10)
	{
		print_number(n / 10);
		print_number(n % 10);
	}
	else
	{
		_putchar(n + '0');
	}
}
