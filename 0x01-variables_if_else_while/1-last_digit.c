#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* A program that will assign a random number to the variable
 * main - Entry point
 *
 * Return:Always 0 (Success)
 */
int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;
	if (ld > 5)
	{
		printf("last digit 0f %d is %d and is greater than 5\n", n, ld);
	}
	else if (ld == 0)
	{
		printf("last digit 0f %d is %d and is 0\n", n, ld);
	}
	else
	{
		printf("last digit 0f %d is %d and is less than 6 and not 0\n", n, ld);
	}
	return (0);
}