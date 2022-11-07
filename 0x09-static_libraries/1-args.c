#include <stdio.h>
/**
 *main - print argc
 *@argc: cmd count
 *@argv: cmd string
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (argv[0] != NULL && i < 10)
	{
		i++;
	}
	printf("%d\n", argc - 1);
	return (0);
}
