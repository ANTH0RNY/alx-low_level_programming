#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates arguments of
 * @ac: arguments count
 * @av: arguments vector
 *
 * Return: string or NULL
 */
char *argstostr(int ac, char **av)
{
	char *s2, *s;
	int i, j, l, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		s = av[i];
		j = 0;

		while (s[j++])
			len++;
		len++;
	}
	s2 = (char *)malloc(sizeof(char) * (len + 1));
	if (s2 == NULL)
		return (NULL);
	for (i = 0, j = 0; i < ac && j < len; i++)
	{
		s = av[i];
		l = 0;
		while (s[l])
		{
			s2[j] = s[l];
			l++;
			j++;
		}
		s2[j++] = '\n';
	}
	s2[j] = '\0';

	return (s2);
}
