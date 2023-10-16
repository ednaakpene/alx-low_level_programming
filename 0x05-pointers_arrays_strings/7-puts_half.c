#include "main.h"
/**
 * puts_half - prints half of a string
 *@str: parameter
 */

void puts_half(char *str)
{
int e;
int n;
int count = 0;

for (e = 0; str[e] != '\0'; e++)
	count++;
n = (count - 1) / 2;

for (e = n + 1; str[e] != '\0'; e++)
	_putchar(str[e]);
_putchar('\n');
}
