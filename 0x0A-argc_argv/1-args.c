#include <stdio.h>

/**
 * main - a program that prints the number of argument
 * @argc: number of arguments count
 * @argv: number of arguments vector
 *
 * return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void) argv;/*Ignore argv*/

	printf("%d\n", argc - 1);

	return (0);
}
