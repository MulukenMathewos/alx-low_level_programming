#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int num, malt, prod;

	for (num = 0; num <= 9; num++)
	{
    _putchar('0');
		for (malt = 1; malt <= 9; malt++)
		{
			_putchar(',');
			_putchar(' ');
      prod = num * mult;
      if (prod <= 9)
          _putchar(' ');
      else
          _putchar((prod / 10) + '0');
			_putchar((prod % 10) + '0');
		}
    _putchar('\n');
	}
}
