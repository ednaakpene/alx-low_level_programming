#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: number of times  \ should be printed
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int i, e;

		for (i = 0; i < n; i++)
		{
			for (e = 0; e < n; e++)
			{
				if (e == i)
					_putchar('\\');
				else if (e < i)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
