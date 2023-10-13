#include "main.h"

/**
 * more_numbers - prints more numbers
 */

void more_numbers(void)
{
	int i, e;

	for (i = 1; i <= 10; i++)
	{
		for (e = 0; e <= 14; e++)
		{
			if (e >= 10)
				_putchar('1');
			_putchar (e % 10 + '0');
		}
		_putchar('\n');
	}
}
