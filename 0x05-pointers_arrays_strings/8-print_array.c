#include "main.h"
/**
 *print_array - print array
 *@a: input to function
 *@n: second input
 *
 *Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != 0)
		{
			printf(", ");
		}
		printf("%d", a[i]);

	}
	printf("\n");
}
