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
	int i, count;

	count = 1;
	if (argc <= 1)
	{
		printf("Error\n");
		return (0);
	}
	for (i = 1; i <= argc - 1; i++)
	{
		count *= atoi(argv[i]);
	}
	printf("%d\n", count);
	return (0);
}


