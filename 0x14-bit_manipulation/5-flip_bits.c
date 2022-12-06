#include "main.h"
/**
 * flip_bits - flip bits
 * @m: 2 num
 * @n: num 1
 *Return: unsigned int
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int differnce, result;
	unsigned int j, i;

	j = 0;
	result = 1;
	differnce = n ^ m;
	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if (result == (differnce & result))
			j++;

		result <<= 1;
	}
	return (j);
}
