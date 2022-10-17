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
	}
	for (i = 97; i < 103; i++)
	{
		putchar((char) i);
	}
	putchar('\n');
	return (0);
}
