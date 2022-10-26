#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 */
void jack_bauer(void)
{
	int hr1;
	int hr2;
	int min1;
	int min2;

	for (hr1 = 0; hr1 < 3; hr1++)
	{
		for (hr2 = 0; hr2 < 10; hr2++)
		{
			for (min1 = 0; min1 < 6; min1++)
			{
				for (min2 = 0; min2 < 10; min2++)
				{
					if (hr1 == 2 && hr2 > 3)
					{
					break;
					}	
					_putchar(hr1 + '0');
					_putchar(hr2 + '0');
					_putchar(':');
					_putchar(min1 + '0');
					_putchar(min2 + '0');
					_putchar('\n');
				}
			}
		}
	}
}
