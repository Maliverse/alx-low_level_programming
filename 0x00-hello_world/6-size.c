#include <sdio.h>

/**
 * main - You should produce the exact same output as in the example
 *
 * Return: 0
 */

int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;

	printf("size of a char: %ld byte(s)\n", sizeof(c));
	printf("size of a int: %ld byte(s)\n", sizeof(i));
	printf("size of a long: %ld byte(s)\n", sizeof(li));
	printf("size of a long long: %ld byte(s)\n", sizeof(li));
	printf("size of a float: %ld byre(s)\n", sizeof(f));
	return (0);
}
