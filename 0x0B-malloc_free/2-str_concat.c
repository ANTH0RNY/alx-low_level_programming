#include <stdlib.h>
#include "main.h"
/**
 * str_concat - concatenates string
 * @s1: input str
 * @s2: input str
 * Return: string
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2, i, len;
	char *s;

	i = 0;
	len1 = 0;
	if (s1 != NULL)
	{
		while (s1[i] != '\0')
		{
			i++;
		}
		len1 = i;
	}
	i = 0;
	if (s2 != NULL)
	{
		while (s2[i] != '\0')
		{
			i++;
		}
		len2 = i;
	}
	len = len1 + len2;
	i = 0;
	s = malloc(sizeof(char) * len);
	while (i < len)
	{
		if (i < len1)
		{
			s[i] = s1[i];
		}
		if (i >= len1)
		{
			s[i] = s2[i - len1];
		}
		i++;
	}
	return (s);
}
