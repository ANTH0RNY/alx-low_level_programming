#include "main.h"
/**
 * get_endianness - get end i anness
 * Return: int
 */

int get_endianness(void)
{
	int i;
	char *c;

	i = 1;
	c = (char *)&i;
	return (*c);
}
