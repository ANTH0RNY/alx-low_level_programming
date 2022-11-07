#include "main.h"
/**
 **_strncpy - function
 *@dest: destination
 *@src: source
 *@n: input
 *Return: void
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;

	for (i = 0; i < n && *(src + i); i++)
	{
		*(dest + i) = *(src + i);
	}
	for (; i < n; i++)
	{
	*(dest + i) = '\0';
	}
	return (dest);

}
