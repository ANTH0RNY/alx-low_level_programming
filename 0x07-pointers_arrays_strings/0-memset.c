#include "main.h"
/**
 **_memset - question 0
 *@s: input string
 *@b: second input
 *@n: output to string
 *Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
