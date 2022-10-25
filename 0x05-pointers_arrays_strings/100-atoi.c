#include "main.h"
/**
 * _atoi - string to int
 * @s: input to function
 * Return: the int of string
 *
*/
int _atoi(char *s)
{
	int i = 0;
	unsigned int hold = 0;
	int least = 1;
	int j = 0;

	while (s[i])
	{
		if (s[i] == 45)
			least *= -1;

		while (s[i] >= 48 && s[i] <= 57)
		{
			j = 1;
			hold = (hold * 10) + (s[i] - '0');
			i++;
		}

		if (j == 1)
			break;

		i++;
	}

	hold *= least;
	return (hold);
}
