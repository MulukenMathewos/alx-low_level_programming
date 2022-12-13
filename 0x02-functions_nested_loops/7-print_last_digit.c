#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @n: is the number
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int lastDigit = n % 10;

	_putchar(lastDigit);
	return (0);
}
