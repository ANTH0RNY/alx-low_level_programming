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

	for (i = 0; i <= argc - 1; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
