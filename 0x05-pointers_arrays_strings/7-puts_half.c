#include "main.h"
/**
 *puts_half - print half
 *@str: input
 *Return: void
 */
void puts_half(char *str)
{
	int count = 0;
	int i, n;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
		count++;
	}
	n = count / 2;

	for (i = n; i <= count; i++)
	{
		putchar(str[i]);
	}
}
