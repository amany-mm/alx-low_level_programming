#include <stdio.h> /* printf */
#include "variadic_functions.h"

/**
 * print_strings - prints numbers, followed by a new line.
 * @separator: string to be printed between strings
 * @n: number of strings passed to the function
 * Return: NULL
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	char *s;

	if (n > 0)
	{
		va_start(valist, n);

		for (i = 1; i <= n; i++)
		{
			s = va_arg(valist, char*);

			if (s == NULL)
				printf("(nil)");
			else
				printf("%s", s);

			if (i != n && separator != NULL)
				printf("%s", separator);
		}

		va_end(valist);
	}

	printf("\n");
}
