#include "main.h"
/**
 * main - answer to question
 *
 * Return: 0
*/
int main(void)
{
	char input[84];
	int hold = 0, sum = 0, i, j;

	srand(time(0));

	while (sum < 2772)
	{
		input[hold] = 33 + rand() % 94;
		sum += input[hold++];
	}

	input[hold] = '\0';

	if (sum != 2772)
	{
		i = (sum - 2772) / 2;
		j = (sum - 2772) / 2;
		if ((sum - 2772) % 2 != 0)
			i++;

		for (hold = 0; input[hold]; hold++)
		{
			if (input[hold] >= (33 + i))
			{
				input[hold] -= i;
				break;
			}
		}
		for (hold = 0; input[hold]; hold++)
		{
			if (input[hold] >= (33 + j))
			{
				input[hold] -= j;
				break;
			}
		}
	}
	printf("%s", input);
	return (0);
}
