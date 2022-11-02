#include "main.h"
/**
 **_strchr - pointer to char
 *@s: source
 *@c: to pointer
 *Return: char pointer
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}
	return (NULL);
}
