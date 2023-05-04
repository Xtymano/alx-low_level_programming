#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: the string
 *
 * Return: the encoded string
 */

char *rot13(char *s)
{
	int x, y;
	char *letters1 = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
	char *letters2 = {"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"};

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; y < 52; y++)
		{
			if (s[x] == letters1[y])
			{
				s[x] = letters2[y];
				break;
			}
		}
	}
	return (s);
}
