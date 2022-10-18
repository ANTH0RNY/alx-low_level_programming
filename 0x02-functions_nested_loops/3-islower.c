#include "main.h"
#include <ctype.h>
/**
 * _islower - check the code.
 *
 *@c: input
 * Return: Always 0.
 */

int _islower(int c)
{
	int y;

	y = islower(c);
	if (y == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
