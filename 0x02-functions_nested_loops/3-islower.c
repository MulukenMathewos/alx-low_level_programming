#include "main.h"

/**
 * _islower - checks for lowercase character.
 * @c: is the character
 * Return: 1 if the character is lowercase, if not 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
