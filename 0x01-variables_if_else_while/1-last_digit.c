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

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
	{
		printf("%d Last digit of ", n);
		printf("is and is greater than 5\n");
	}
	if (n == 0)
	{
		printf("%d Last digit of ", n);
		printf("is and is 0\n");
	}
	if (n != 0 && n < 6)
	{
		printf("%d Last digit of ", n);
		printf("is and is less than 6 and not 0\n");
	}
		return (0);
}
