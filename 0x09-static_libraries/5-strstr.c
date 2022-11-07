#include "main.h"
/**
 **_strstr - find input string
 *@haystack: input string
 *@needle: to be search
 *Return: string
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, n;

	i = 0;
	while (haystack[i] != '\0')
	{
		j = 0;
		n = i;
		while (needle[j] != '\0')
		{
			if (haystack[n] != needle[j])
			{
				break;
			}
			 n++;
			 j++;
		}
		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
		i++;
	}
	return (NULL);
}


