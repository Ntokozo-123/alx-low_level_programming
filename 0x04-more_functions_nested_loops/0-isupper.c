#include "main.h"

/**
 * _isupper - checks if parameter is an uppercase character
 * @c: input character
 * Return: 0 if successful
 */

int_isupper(int c)
{
	if (c >= 65 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
