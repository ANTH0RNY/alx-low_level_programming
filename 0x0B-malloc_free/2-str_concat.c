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
		int i, j, len1, len2, len;
	char *s;

	len1 = len2 = 0;

	if (s1 != NULL)
	{
		i = 0;
		while (s1[i++] != '\0')
			len1++;
	}

	if (s2 != NULL)
	{
		i = 0;
		while (s2[i++] != '\0')
			len2++;
	}

	len = len1 + len2;
	s = (char *)malloc(sizeof(char) * (len + 1));
	if (s == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		s[i] = s1[i];
	for (j = 0; j < len2; j++, i++)
		s[i] = s2[j];
	s[len] = '\0';

	return (s);
}
