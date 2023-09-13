#include <stdlib.h>

/**
 * print_name - prints a name.
 * @name: function parameter
 * @f: function
 * Return: NULL
*/


void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);

}
