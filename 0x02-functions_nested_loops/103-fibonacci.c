#include <stdio.h>

/**
 * main -print fib upto 4000000
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long i = 0, j = 1, sum;
	float ttl;

	while (1)
	{
		sum = i + j;
		if (sum > 4000000)
			break;

		if ((sum % 2) == 0)
			ttl += sum;

		i = j;
		j = sum;
	}
	printf("%.0f\n", ttl);

	return (0);
}
