#include "main.h"

/**
 * print_line - straight-line
 * @n: No of times
 * Return: Always 0.
 */

void print_line(int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
