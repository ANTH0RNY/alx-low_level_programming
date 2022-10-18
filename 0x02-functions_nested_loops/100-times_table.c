#include "main.h"

/**
 * print_times_table -printing multiple table.
 * @n: input to programme
 */
void print_times_table(int n)
{
	int i, j, h;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');

			for (j = 1; j <= n; j++)
			{
				_putchar(',');
				_putchar(' ');

				h = i * j;

				if (h <= 99)
					_putchar(' ');
				if (h <= 9)
					_putchar(' ');

				if (h >= 100)
				{
					_putchar((h / 100) + '0');
					_putchar(((h / 10)) % 10 + '0');
				}
				else if (h <= 99 && h >= 10)
				{
					_putchar((h / 10) + '0');
				}
				_putchar((h % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
