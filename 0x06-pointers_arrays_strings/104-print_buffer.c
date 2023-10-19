#include "main.h"
#include <stdio.h>

/**
 * print_buffer - main function
 * @b: buffer
 * @size: buffer size
 * Return: return 0
 */

void print_buffer(char *b, int size)
{
int e;
int f;
int g;

e = 0;

if (size <= 0)
	{
	printf("\n");
	return;
	}
while (e < size)
	{
	f = size - e < 10 ? size - e : 10;
	printf("%08x: ", e);
for (g = 0; g < 10; g++)
	{
	if (g < f)
	printf("%02x", *(b + e + g));
	else
	printf("  ");
	if (g % 2)
	{
	printf(" ");
	}
	}
for (g = 0; g < f; g++)
	{
	int c = *(b + e + g);

	if (c < 32 || c > 132)
	{
	c = '.';
	}
	printf("%c", c);
	}
	printf("\n");
	e += 10;
	}
}
