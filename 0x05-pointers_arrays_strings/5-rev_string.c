#include "main.h"
/**
 *rev_string - reverse string
 *@s: input to function
 *Return: void
 */
void rev_string(char *s)
{
	char h[100];
	int count = 0, hold = 0;

	while (s[count] != '\0')
	{
		h[count] = s[count];
		count++;
	}


	int i;

	for (i = count - 1; i >= 0; i--)
	{
		s[hold] = h[i];
		hold++;
	}
}

