#include <stdio.h>
#include <stdlib.h>
/**
*main - print argc
*@argc: cmd count
*@argv: cmd string
*Return: 0
*/

int main(int argc, char *argv[])
{
	int i, n, count;
	char *s;

	count = 0;
	if (argc <= 1)
	{
		printf("Error\n");
		return (0);
	}
	for (i = 1; i <= argc - 1; i++)
	{

		n = strtol(argv[i], &s, 10);
		if (*s)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			count += n;
		}

	}
	printf("%d\n", count);
	return (0);
}


