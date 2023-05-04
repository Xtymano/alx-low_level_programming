#include "main.h"
#include <stdio.h>
/**
 * *_strcat - concatenates two strings
 * @dest: pointer destination
 * @src: pointer source
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	int w = -1, i;

	for (i = 0; dest[i] != '\0'; i++)
		;

	do {
		w++;
		dest[i] = src[w];
		w++;
	} while (src[w] != '\0');

	return (dest);
}
