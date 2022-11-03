#include "main.h"
/**
 * check - check condition
 * @s: input string
 * @i: first index
 * @j: second index
 * Return: int
 */

int check(char *s, int i, int j)
{
	if (s[i] == s[j])
	{
		if (i > j / 2)
			return (1);
		else
			return (check(s, i + 1, j - 1));
	}
	else
		return (0);
}

/**
 *strln - length of string
 *@s: string length
 *Return: len
 */
int strln(char *s)
{
	int i;

	i = 0;
	if (*s == '\0')
	{
		return (0);
	}
	i++;
	return (i + strln(s + 1));
}

/**
 *is_palindrome - check for palindrome
 *@s: input string
 *Return: int
 *
 */

int is_palindrome(char *s)
{
	int len;

	len = strln(s);
	return (check(s, 0, len - 1));
}
