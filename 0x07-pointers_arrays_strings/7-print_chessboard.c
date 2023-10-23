#include "main.h"

/**
  * print_chessboard - prints the chessboard
  * @a: parameter
  * Return: return 0
  */

void print_chessboard(char (*a)[8])
{
int e;
int f;

for (e = 0; e < 8; e++)
{
for (f = 0; f < 8; f++)
{
	_putchar(a[e][f]);
}
_putchar('\n');
}
}
