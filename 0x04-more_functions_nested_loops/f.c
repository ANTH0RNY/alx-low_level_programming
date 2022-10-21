#include <stdio.h>
int main(void)
{
	for (char c = '0'; c <= '9'; c++)
	{
		if ( c != '2' && c != '4')
		{
			putchar(c);
		}
	}
}
