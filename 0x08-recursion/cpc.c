#include "main.h"
/**
 *_sqrt_recursion - get sqrt
 *@n: input number
 *Return: int
 *
 */
int _sqrt_recursion(int n)
{
	int i;

	i = 0;
	while (i < 10000)
	{
		if ((i * i) == n)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
