#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry
 * Return: 0
 */
int main(void)
{
	char c = 'z';

	while (c <= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
