#include "main.h"

/**
 * print_diagonal - a function that prints a diagonal line
 * @n: input number of times '\' should be printed
 * Return: a diagonal line
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)

		_putchar('\n');

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}

		_putchar('\\');
		_putchar('\n');
	}
}
