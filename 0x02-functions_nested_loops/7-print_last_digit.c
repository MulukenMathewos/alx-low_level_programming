#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @n: is the number
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int lastDigit = n % 10;
	int r;

	print_last_digit(98);
	print_last_digit(0);
	r = print_last_digit(-1024);
	_putchar('0' + r);
	_putchar('\n');
	_putchar(lastDigit);

	return (0);
}
