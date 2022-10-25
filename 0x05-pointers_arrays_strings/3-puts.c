#include "main.h"
/**
 *_puts - puts
 *@str: inputs
 *Return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
