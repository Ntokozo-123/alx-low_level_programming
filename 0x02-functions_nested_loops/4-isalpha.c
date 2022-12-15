#include <stdio.h>

/**
 * _isalpha - check the code
 * @c: character to be checked
 * Return: 1 if it's an English character
 * 0 if it's not an English character
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
