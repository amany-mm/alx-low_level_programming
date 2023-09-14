#include <stdio.h> /* printf */
#include "variadic_functions.h"


/**
 * print_char - prints a character
 * @valist: valist
 */
void print_char(va_list valist)
{
	printf("%c", va_arg(valist, int));
}

/**
 * print_int - prints an integer
 * @valist: valist
 */
void print_int(va_list valist)
{
	printf("%i", va_arg(valist, int));
}

/**
 * print_float - prints a float
 * @valist: valist
 */
void print_float(va_list valist)
{
	printf("%f", va_arg(valist, double));
}

/**
 * print_string - prints a string
 * @valist: valist
 */
void print_string(va_list valist)
{
	char *s;

	s = va_arg(valist, char*);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

/**
 * print_all - prints anything.
 * @format: list of types of arguments passed to the function
 * Return: NULL
*/

void print_all(const char * const format, ...)
{
	va_list valist;
	int i, j = 0;
	char *separator = "";

	datatype choice[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};

	va_start(valist, format);

	while (format != NULL && format[j] != '\0')
	{
		i = 0;
		while (choice[i].letter != '\0')
		{
			if (choice[i].letter == format[j])
			{
				printf("%s", separator);
				choice[i].func(valist); /* va_arg*/
				separator = ", ";
			}

			i++;
		}

		j++;
	}

	va_end(valist);

	printf("\n");
}
