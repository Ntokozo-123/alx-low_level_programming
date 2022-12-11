#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: prints all single digit numbers of base 16
 * starting from 0, followed by a new line
 * Return: 0
 */
int main(void)
{
	char c = '0123456789ABCDEF';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
