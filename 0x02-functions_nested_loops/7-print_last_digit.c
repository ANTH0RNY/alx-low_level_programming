#include "main.h"

/**
 * print_last_digit - check the code
 * @n: input for function
 * Return: 0
 */

int print_last_digit(int n)
{
	int y;

	y = (n) % 10;
	if (y < 0)
	{
		y *= -1;
	}
	_putchar(y + '0');
	return (y);
}
