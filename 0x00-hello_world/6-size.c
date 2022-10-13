#include <stdio.h>
/**
 * main - Entry point
 *
 * Return 0 (Sucess)
 */
int main(void)
{
	int integer;
	int lint;
	int uint;
	char unsignedchar;
	float f;

	printf("Size of a char: %zu byte(s)\n", (unsigned long)sizeof(unsignedchar));
	printf("Size of an int: %zu byte(s)\n", (unsigned long)sizeof(integer));
	printf("Size of a long int: %zu byte(s)\n", (unsigned long)sizeof(uint));
	printf("Size of a long long int: %zu byte(s)\n", (unsigned long)sizeof(lint));
	printf("Size of a float: %zu byte(s)\n", (unsigned long)sizeof(f));

	return (0);
}
