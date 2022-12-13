#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 * Return: sum of the even-valued terms
 */
int main(void)
{
	int i = 1, j = 1, sum = 0;

	while (i < 4000000)
	{
		i = i + j;
		j = i - j;
		if (i % 2 == 0)
			sum += i;
	}
	printf("%d", sum);
	return (0);
}
