#include "main.h"
/**
 *is_prime_number - check if prime
 *@n: number to check
 *Return: int
 *
 */
int is_prime_number(int n)
{
	int i;

	i = 2;
	while (i <= n)
	{
		if ((n % i) == 0)
		{
			break;
		}
		i++;
	}
	if (n != i)
	{
		return (0);
	}
	return (1);
}
