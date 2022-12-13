#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @n: is the number
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int lastDigit = n % 10;

	if (lastDigit < 0)
		lastDigit *= -1;

	_putchar(lastDigit + '0');
	return (0);
}
