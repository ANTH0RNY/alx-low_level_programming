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
	int h;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		for (j = 0; j <= 9; j++)
		{
			_putchar(',');
			_putchar(' ');

			h = i * j;

			if (h <= 9)
				_putchar(' ');
			else
				_putchar((h / 10) + '0');

			_putchar((h % 10) + '0');

		}
		_putchar('\n');
	}
}
