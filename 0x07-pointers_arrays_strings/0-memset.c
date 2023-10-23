#include "main.h"
/**
 * _memset - function that fills memory with a constant byte
 * @s: first parameter of function
 * @n: second parameter of function
 * @b: constant byte parameter
 * Return: return s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int e;

for (e = 0; e < n; e++)
	{
	s[e] = b;
	}
return (s);
}
