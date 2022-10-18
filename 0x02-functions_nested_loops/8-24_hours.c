#include "main.h"

/**
 * jack_bauer -print hours
 *
 * Return: nothing
 */

void jack_bauer(void)
{
	int hour1;
	int hour2;
	int min1;
	int min2;

	for (hour1 = 0; hour1 <= 2; hour1++)
	{
		for (hour2 = 0; hour2 <= 3; hour2++)
		{
			for (min1 = 0; min1 <= 5; min1++)
			{
				for (min2 = 0; min2 <= 9; min2++)
				{
					_putchar(hour1 + '0');
					_putchar(hour1 + '0');
					_putchar(':');
					_putchar(min1 +  '0');
					_putchar(min2 + '0');
					_putchar('\n');
				}
			}
		}
	}
}
