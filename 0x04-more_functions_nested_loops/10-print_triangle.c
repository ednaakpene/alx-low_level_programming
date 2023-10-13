#include "main.h"
/**
 * print_triangle - prints a triangle, then a new line
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, e;

		for (i = 1; i <= size; i++)
		{
			for (e = i; e < size; e++)
			{
				_putchar(' ');
			}

			for (e = 1; e <= i; e++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}

