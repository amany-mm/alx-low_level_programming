#include "main.h"

/**
 * main - Entry point
 * Description: prints "_putchar" using putchar prototype
 * Return: 0 (success)
*/

int main(void)
{
	char str[] = "_putchar\n";
	int ch;

	for (ch = 0 ; ch < 9 ; ch++)
		_putchar(str[ch]);

	return (0);
}
