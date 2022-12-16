#include "main.h"

/**
 * _isupper - checks if parameter is an uppercase character
 * @c: input character
 * Return 1 if c is uppercase character, 0 otherwise
 */

int_isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
