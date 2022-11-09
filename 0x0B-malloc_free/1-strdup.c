#include <stdlib.h>
#include "main.h"
/**
 *_strdup - cpy of string
 *@str: input string
 *Return: string
 */
char *_strdup(char *str)
{
	int len;
	int i;
	char *s;

	if (str == NULL)
		return (NULL);

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	s = malloc(sizeof(char) * len);
	if (s == NULL)
		return (NULL);

	i = 0;
	while (i < len)
	{
		s[i] = str[i];
		i++;
	}

	return (s);
}

