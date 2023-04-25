#include"main.h"

/**
 * _islower - Checks for lowercase alphabet
 * Return: if character is lowercase, otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
