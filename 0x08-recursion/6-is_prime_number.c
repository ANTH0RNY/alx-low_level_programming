#include "main.h"
/**
 * check - check condition
 * @in: inpout
 * @out: output
 * Return: int
 */
int check(int in, int out)
{
	if (out % in == 0)
	{
		if (out == in)
		{
			return (1);
		}
		return (0);
	}
	return (check(in + 1, out));
}

/**
 *is_prime_number - check if prime
 *@n: number to check
 *Return: int
 *
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	if (n < 2)
		return (0);
	return (check(2, n));
}
