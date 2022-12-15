#include "main.h"

/**
 * _islower - tests if a character is lowercase
 * @c: is the character to be checked
 * Return: 1 if it is lowercase, 0 if it is not lowercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
