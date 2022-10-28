#include "main.h"
/**
 *reverse_array - reverse array
 *@a: input
 *@n: input
 *Return: void
 */
void reverse_array(int *a, int n)
{
	int  i, j;
	int hold[n];

	j = n - 1;
	for (i = 0; i < n; i++)
	{
		hold[i] = a[j - i];
	}
	for (i = 0; i < n; i++)
	{
		a[i] = hold[i];
	}
}
