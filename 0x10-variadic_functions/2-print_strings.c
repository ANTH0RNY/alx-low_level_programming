#include "variadic_functions.h"
#include <stdio.h>
/**
 *print_strings - print strings
 *@separator: separator
 *@n: count argument
 *Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list ls;


	if (separator == NULL)
		separator = "";

	va_start(ls, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(ls, char *);
		if (s == NULL)
			s = "(nil)";
		printf("%s", s);
		if (i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ls);
}
