#include <stdio.h>
#include "main.h"
/**
 * *_strncpy - find the length of a string
 * @dest: pointer to the string
 * @src: pointer
 * @n: int
 * Return: destination
 */

char *_strncpy(char *dest, char *src, int n)
{
int c;

for (c = 0; c < n && src[c] != '\0'; c++)
	dest[c] = src[c];

for ( ; c < n; c++)
	dest[c] = '\0';

return (dest);
}
