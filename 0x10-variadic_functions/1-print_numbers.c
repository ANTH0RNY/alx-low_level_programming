#include "variadic_functions.h"
#include <stdio.h>
/**
 *print_numbers - print num
 *@separator: separator
 *@n: command line arguments
 *Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	if (separator != NULL && n > 0)
	{
		va_list ls;

		va_start(ls, n);
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(ls, int));
			if (i != n - 1)
				printf("%s", separator);

		}
		printf("\n");
		va_end(ls);
	}
}

