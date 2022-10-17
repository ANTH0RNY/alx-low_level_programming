#include <stdio.h>
/**
 * main -print numbers
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 122; i > 96; i--)
	{
		putchar((char) i);
	}
	putchar('\n');
	return (0);
}
