#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	int count;
	unsigned long i = 0, j = 1, sum;
	unsigned long i_a, i_b, j_a, j_b;
	unsigned long a, b;

	for (count = 0; count < 92; count++)
	{
		sum = i + j;
		printf("%lu, ", sum);

		i = j;
		j = sum;
	}

	i_a = i / 10000000000;
	j_a = j / 10000000000;
	i_b = i % 10000000000;
	j_b = j % 10000000000;

	for (count = 93; count < 99; count++)
	{
		a = i_a + j_a;
		b = i_b + j_b;
		if (i_b + j_b > 9999999999)
		{
			a += 1;
			b %= 10000000000;
		}

		printf("%lu%lu", a, b);
		if (count != 98)
			printf(", ");

		i_a = j_a;
		i_b = j_b;
		j_a = a;
		j_b = b;
	}
	printf("\n");
	return (0);
}
