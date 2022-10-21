#include "main.h"
/**
 *more_numbers -prints more numbers
 *
 *
 *Return: void
 */
void more_numbers(void)
{
	char c, h;
	int i;

	for (i = 0; i <= 10 ; i++)
	{
		for (c = '0'; c <= '1'; c++)
		{
			for (h = '0'; h <= '9'; h++)
			{
				if (c != '0')
				{
					_putchar(c);
				}
				_putchar(h);
				if (c == '1' && h == '4')
				{
					break;
				}
			}
		}
		_putchar('\n');
	}
}
