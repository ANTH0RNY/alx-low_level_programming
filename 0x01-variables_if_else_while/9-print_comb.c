#include <stdio.h>
/**
 * main -print numbers
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar((char) i);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
