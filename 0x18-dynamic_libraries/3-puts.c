#include "main.h"

/**
 * _puts - a function that prints a string, followed by a new line, to stdout
 * @str: prints a string
 *
 */

void _puts(char *str)
{
	int middle;

	for (middle = 0; str[middle] != '\0'; middle++)
	{
		_putchar(str[middle]);
	}
	_putchar('\n');
}
