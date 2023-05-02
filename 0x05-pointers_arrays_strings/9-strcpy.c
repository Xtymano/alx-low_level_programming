#include "main.h"

/**
 * _strcpy - a function that copies the string pointed to by src
 * @dest - This is destiny
 * @src - This is the copia
 *
 * Return: This is a return copy
 */

char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
