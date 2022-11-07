#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the min number of coins to make change
 * for an amount of money
 * @argc: cmd count
 * @argv: cmd string
 * Return: 0
 */
int main(int argc, char **argv)
{
	int cash, count;
	unsigned int i;
	char *s;
	int cents[] = {25, 10, 5, 2};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cash = strtol(argv[1], &s, 10);
	count = 0;

	if (!*s)
	{
		while (cash > 1)
		{
			for (i = 0; i < sizeof(cents[i]); i++)
			{
				if (cash >= cents[i])
				{
					count += cash / cents[i];
					cash = cash % cents[i];
				}
			}
		}
		if (cash == 1)
			count++;
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", count);
	return (0);
}
