#include <stdio.h>

/**
 * main - main block
 * Description: Prints all possible cominations of two digits
 * Numbers separated by ,, followed by a space
 * Two digits are different
 * 01 and 10 are considered the same combination of two digits 0 and 1
 * Prints only the smallest combination of two digits
 * Numbers printed in ascending order, with two digits
 * Putchar function used
 * Return: Always 0
 */
int main(void)
{
	int digit1, digit2;

	for (digit1 = 0; digit1 < 9; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 < 10; digit2++)
		{
			putchar((digit1 % 10) + '0');
			putchar((digit2 % 10) + '0');

			if (digit1 == 8 && digit2 == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
