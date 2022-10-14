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
	if (n > 5)
	{
		printf("Last digit of %d ", n);
		printf("is %d", lastdigit );
		printf("and is greater than 5\n");
	}
	if (n == 0)
	{
		printf("%d Last digit of ", n);
		printf("is %d", lastdigit );
		printf("and is 0\n");
	}
	if (n != 0 && n < 6)
	{
		printf("%d Last digit of ", n);
		printf("is %d", lastdigit );
		printf("and is less than 6 and not 0\n");
	}
		return (0);
}
