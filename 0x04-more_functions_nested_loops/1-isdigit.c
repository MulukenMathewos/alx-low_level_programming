#include "main.h"

/**
 * _isupper - checks for digit.
 * Return: 1 if c is digit, 0 otherwise
 * @c: input character
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
