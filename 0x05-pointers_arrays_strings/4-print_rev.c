#include "main.h"
/**
 *print_rev - print reverse string
 *@s: input to function
 *Return: void
 */
void print_rev(char *s)
{
	char h[100];
	int count = 0, hold = 0;

	while (*s != '\0')
	{
		count++;
		h[hold] = *s;
		hold++;
		s++;
	}
	int i = 0;

	for (i = count; i >= 0; i--)
	{
		_putchar(h[i]);
	}
	_Putchar('\n');
}
