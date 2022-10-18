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
		for (j = 0; j <= 9; j++)
		{
			h = i * j;
			if (h < 10)
			{
				if (j != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(h + '0');
			}
			else
			{
				_putchar(' ');
				_putchar((h / 10) + '0');
				_putchar((h % 10) + '0');
			}
			if (j != 9)
			{
				_putchar(' ');
			}

		}
		_putchar('\n');
	}
}
