#include "main.h"
/**
 * print_diagsums - prints the sums of the two diagonals of a square matrix
 * @a: first input
 * @size: second input
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j, hold, holder = 0, count = 0;

	for (i = 0; i < size; i++)
	{
		hold = (i * size) + i;
		holder += *(a + hold);
	}
	for (j = 0; j < size; j++)
	{
		hold = (j * size) + (size - 1 - j);
		count += *(a + hold);
	}
	printf("%i, %i\n", holder, count);
}
