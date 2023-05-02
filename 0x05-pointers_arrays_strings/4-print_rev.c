#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse
 *
 * @s: prints a string
 */

void print_rev(char *s)
{
	int middle;

	for (middle = 0; s[middle] != '\0'; middle++)
		;
	for (middle = middle - 1; s[middle] != '\0'; middle--)
	{
		_putchar(s[middle]);
	}
	_putchar('\n');
}
