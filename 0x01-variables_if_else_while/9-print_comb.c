#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = 48 ; c < 58 ; c++)
	{
		putchar(c);
		if (c != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}