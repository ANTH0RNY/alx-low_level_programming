#include "main.h"

/**
 * times_table -times table
 *
 * Return: nothing
 */
void times_table(void)
{
	int i;
	int j;
	int y;
	int h;

	for (i = 0; i <= 9; i++)
	{
		y = 0;
		for (j = 0; j <= 9; j++)
		{
			if (y != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			h = i * j;
			if (((int) h / 10) != 0)
			{
				_putchar(((int) h / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar(((i * j) % 10) + '0');
			y++;
		}
		_putchar('\n');
	}
}
