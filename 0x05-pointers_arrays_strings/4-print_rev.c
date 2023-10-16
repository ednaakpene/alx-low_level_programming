#include "main.h"
/**
 * print_rev - prints reverse
 * @s: parameter of function
 */

void print_rev(char *s)

{int e;
int count = 0;

for (e = 0; s[e] != '\0'; e++)
	count++;

for (e = count - 1; e >= 0; e--)
	_putchar (s[e]);
_putchar ('\n');
}
