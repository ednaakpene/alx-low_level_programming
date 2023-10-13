#include "main.h"
/**
 * print_numbers - prints numbers
 * Return: void
 */

void print_numbers(void)
{
	int e;

	for (e = 0; e <= 9; e++)
	{
		_putchar(e + '0');
	}
	_putchar('\n');
}
