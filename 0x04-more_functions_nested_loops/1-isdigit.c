#include "main.h"
/**
 *_isdigit -check if digit
 *
 * @c: input to function
 *
 *Return: 1 if digit 0 if not
 */

int _isdigit(int c)
{
	if (isdigit(c) != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
