#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - check the code
 * @n: input for function
 * Return: 0
 */

int print_last_digit(int n)
{
	int y;

	y = (abs(n) % 10);
	_putchar(y + '0');
	return (y);
}
