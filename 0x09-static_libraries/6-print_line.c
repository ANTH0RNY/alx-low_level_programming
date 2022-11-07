#include "main.h"
/**
 *print_line -print line
 *@n: input to function
 *
 *Return: void
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
