#include "main.h"
/**
 * set_bit - bity to be given index
 * @n: number to index
 * @index: starting from point
 * Return: int
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	i = 1 << index;

	*n = *n | i;
	return (1);
}
