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

	for (hour1 = 0; hour1 < 24; hour1++)
	{
		for (hour2 = 0; hour2 < 60; hour2++)
		{
			_putchar(((int) hour1 / 10) + '0');
			_putchar(((int) hour1 % 10) + '0');
			_putchar(':');
			_putchar(((int) hour2 / 10) + '0');
			_putchar(((int) hour2 % 10) + '0');
			_putchar('\n');
	}
}
