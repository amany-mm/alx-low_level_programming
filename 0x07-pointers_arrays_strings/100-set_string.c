#include "main.h"


/**
 * set_string - sets the value of a pointer to a char.
 *
 * @s: pointer to pointer, pointer(pointer to char)
 * @to:char pointer to be set
 *
 * Return: NULL
 */


void set_string(char **s, char *to)
{
	*s = to;

}
