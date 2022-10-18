#include "main.h"

/**
 *  print_alphabet_x10- check the code
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int i;
	int j;

	for (j = 0; j <= 10; j++)
	{
		for (i = 97; i < 123; i++)
		{
			char c = (char) i;

			_putchar (c);
		}
		_putchar('\n');
	}
}
