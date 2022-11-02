#include "main.h"
/**
 **_strchr - pointer to char
 *@s: source
 *@c: to pointer
 *Return: char pointer
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
		{
			s++;
		}
		else
		{
			return (s);
		}
	}
	if (c == '\0')
	{
		return (s);
	}

	return (NULL);
}
