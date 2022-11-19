#include "function_pointers.h"
/**
 *int_index - main function
 *@array: array input
 *@size: size of input
 *@cmp: compare function
 *Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
