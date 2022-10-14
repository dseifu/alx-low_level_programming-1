#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdigit = n % 10;
	if (lastdigit > 5)
	{
		printf("Last digit of %d ", n);
		printf("is %d", lastdigit);
		printf(" and is greater than 5\n");
	}
	if (lastdigit == 0)
	{
		printf("Last digit of %d ", n);
		printf("is %d", lastdigit);
		printf(" and is 0\n");
	}
	if (lastdigit != 0 && lastdigit < 6)
	{
		printf("Last digit of %d ", n);
		printf("is %d", lastdigit);
		printf(" and is less than 6 and not 0\n");
	}
		return (0);
}
