#include "main.h"

/**
 * times_table - compute absolute value of number
 */
void times_table(void)
{
	int i;
	int j;
	int m;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			m = i * j;
			if (m < 10)
			{
				if (j == 0)
				{
					_putchar(m % 10 + '0');
					_putchar(',');
					_putchar(' ');
					continue;
				}
				_putchar(' ');
				_putchar(m % 10 + '0');
			if (j == 9)
			{
				continue;
			}
				_putchar(',');
				_putchar(' ');
				continue;
			}
			_putchar(m / 10 + '0');
			_putchar(m % 10 + '0');
			if (j == 9)
			{
				continue;
			}
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
