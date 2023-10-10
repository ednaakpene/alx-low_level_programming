#include <stdio.h>

/**
 * main - entry point
 * Return: return 0
 */

int main(void)

{
	char n;

	for (n = 0; n < 10; n++)

	{
	putchar((n % 10) + '0');
	}
	putchar('\n');

	return (0);
}
