#include "main.h"
/**
 *string_toupper - upper
 *@c: input
 *
 *Return: char
 */

char *string_toupper(char *c)
{
	int i, h;

	i = 0;
	while (c[i] != '\0')
	{
		h = (int) c[i];
		if (h > 96 && h < 123)
		{
			c[i] = (char) (h - 32);
		}
		i++;
	}
}
