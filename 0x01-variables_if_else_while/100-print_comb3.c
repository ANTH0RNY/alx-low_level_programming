#include <stdio.h>
/**
 * main -print numbers
 *
 * Return: 0
 */
int main(void)
{
	int i;
	int j;
	int y;

	y = 0;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			if (i != j && i < j)
			{
				if (y != 0)
				{
					putchar(',');
					putchar(' ');
				}
				putchar((char) i);
				putchar((char) j);
				y++;
			}
		}

	}
	putchar('\n');
	return (0);
}
