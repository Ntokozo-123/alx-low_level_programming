#include "main.h"

/**
 * @n: the number to be checked
 * Return: 1 and print + if n is positive
 * 0 and print 0 if n is zero
 * -1 and print -1 if n is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(0);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}

}
