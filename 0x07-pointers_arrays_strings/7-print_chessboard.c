#include "main.h"
/**
 * print_chessboard - Entry point
 * @a: array
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	int l;
	int m;

	for (l = 0; l < 8; l++)
	{
		for (m = 0; m < 8; m++)
			_putchar(a[l][m]);
		_putchar('\n');
	}
}
