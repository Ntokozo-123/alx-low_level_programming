#include "main.h"

/**
 * _strlen_recursion - length of a string
 * @s: The string to be measured
 * Return: int
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		i = i + _strlen_recursion(s + 1);
	}
	return (i);
}
