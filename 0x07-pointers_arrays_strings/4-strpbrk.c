#include "main.h"
/**
 **_strpbrk - first occurance in string
 *@s: input string
 *@accept: string input
 *Return: string
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				return (s + i);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}

