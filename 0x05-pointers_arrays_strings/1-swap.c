#include "main.h"
/**
 *swap_int - swap integer
 *@a: first input
 *@b: second input
 *Return: void
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
