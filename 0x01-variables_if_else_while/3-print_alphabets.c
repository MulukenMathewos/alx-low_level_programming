#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
  
  char c = 'A';
  
  while (c <= 'Z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}