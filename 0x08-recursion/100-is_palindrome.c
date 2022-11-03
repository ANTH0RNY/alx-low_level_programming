#include "main.h"
/**
 *is_palindrome - check for palindrome
 *@s: input string
 *Return: int
 *
 */

int is_palindrome(char *s)
{
	int len, i;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	len--;
	i = 0;
	while (i < len)
	{
		if (s[i++] != s[len--])
		{
			return (0);
		}
	}
	return (1);
}
