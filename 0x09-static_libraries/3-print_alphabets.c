#include <stdio.h>
/**
 * main -print alphabet lowercase
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		char c = (char) i;

		putchar (c);
	}
	for (i = 65; i < 91; i++)
	{
		char c = (char) i;

		putchar(c);
	}
	putchar('\n');
	return (0);
}
