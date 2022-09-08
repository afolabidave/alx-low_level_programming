#include <stdio.h>

/**
 * main - is the entry point for the program.
 *
 * return: zero if no error, non-zero value if error.
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("size of a char: 1 byte(s)\n", sizeof(a));
	printf("size of an int: 4  byte(s)\n", sizeof(b));
	printf("size of a long int: 8 byte(s)\n", sizeof(c));
	printf("size of a long long int: 8 byte(s)\n", sizeof(d));
	printf("side of a float: 4 byte(s)\n", sizeof(e));
	return (0);
}

