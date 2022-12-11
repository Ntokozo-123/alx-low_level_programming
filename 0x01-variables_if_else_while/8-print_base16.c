#include <stdio.h>

/**
 * main - a program that prints all letters of base 16
 * in lower case
 * Return: Always 0
 */
int main(void)
{
	int num;
	char alpha;

	for (num = 0; num < 10; num++)
		putchar(num % 10) + '0');
	for (alpha = 'a'; alpha <= 'f'; alpha++)
		putchar(alpha);
	putchar('\n');

	
	return (0);
}
