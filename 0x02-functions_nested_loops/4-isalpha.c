#include "main.h"
#include <ctype.h>
/**
 * _isalpha - check the code.
 *
 * @c: input
 * Return: Always 0.
 */

int _isalpha(int c)
{
	int y;

	y = isalpha(c);
	if (y == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
