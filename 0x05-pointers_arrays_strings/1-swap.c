#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers
 * @a: this is the first entry
 * @b: this is the first entry
 *
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
