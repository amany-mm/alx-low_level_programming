#include "lists.h"

/**
 * fuc_execute_before_main - executes this function
 * before the main function is executed.
 * using prior attribute called `__attribute__((constructor))`
 * Return: NULL
*/

void __attribute__((constructor)) fuc_execute_before_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
