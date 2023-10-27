#include "main.h"
/**
 * _puts - name of function
 * @str: parameter of function
 */

void _puts(char *str)
{
int e;

for (e = 0; str[e] != '\0'; e++)
_putchar (str[e]);
_putchar ('\n');
}
