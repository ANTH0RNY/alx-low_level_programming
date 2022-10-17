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
	int u;

	y = 0;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			for (u = 48; u < 58; u++)
			{
				if (i != j && i != u && u != i && i < j && j < u)
				{
					if (y != 0)
					{
						putchar(',');
						putchar(' ');
					}
					putchar((char) i);
					putchar((char) j);
					putchar((char) u);
					y++;
				}
			}
		}

	}
		putchar('\n');
		return (0);
}
