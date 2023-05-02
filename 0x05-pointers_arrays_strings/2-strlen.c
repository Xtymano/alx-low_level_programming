#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 *
 *  @s: a string input
 *
 *  Return: the length of the string
 */

int _strlen(char *s)
{
	int middle;

	for (middle = 0; s[middle] != '\0'; middle++)
		;
	return (middle);
}
