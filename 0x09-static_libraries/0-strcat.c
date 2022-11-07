#include "main.h"
/**
 **_strcat - function
 *@dest: destination
 *@src: source
 *Return: void
 */

char *_strcat(char *dest, char *src)
{
	int j;
	int count = 0;

	while (dest[count] != '\0')
	{
		count++;
	}

	j = 0;
	while (src[j] != '\0')
	{
		dest[count] = src[j];
		j++;
		count++;
	}
	dest[count] = '\0';
	return (dest);
}
