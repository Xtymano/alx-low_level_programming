#include <stdio.h>
/**
 * main - Entry point
 * Description: Program that print alphabet in lowercasw
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n;

	n = 'a';
	while (n <= 'z')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
