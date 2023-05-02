#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - a function that copies the string pointed to by src
 * @dest - the pointer to the buffer in which we copy the string
 * @src - This is the copied string
 *
 * Return: This is a pointer to dest 
 */

char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
