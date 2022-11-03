#include "main.h"
/**
 * check - check for sqrt
 * @input: input to function
 * @target: the target
 * Return: int
 */
int check(int input, int target)
{
	if (input * input == target)
	{
		return (input);
	}
	if (input * input > target)
	{
		return (-1);
	}
	return (check(input + 1, target));
}

/**
 *_sqrt_recursion - get sqrt
 *@n: input number
 *Return: int
 *
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check(1, n));
}
