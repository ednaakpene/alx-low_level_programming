#include "main.h"

/**
 * _atoi - function that converts string to integer
 * @s: parameter of string to be converted to integer
 * Return: return 0
 */

int _atoi(char *s)
{
int e;
int d;
int n;
int len;
int f;
int digit;

e = 0;
d = 0;
n = 0;
len = 0;
f = 0;
digit = 0;

	while (s[len] != '\0')
	len++;

	while (e < len && f == 0)
	{
	if (s[e] == '-')
	++d;

	if (s[e] >= '0' && s[e] <= '9')
	{
	digit = s[e] - '0';
	if (d % 2)
	digit = -digit;
	n = n * 10 + digit;
	f = 1;
	if (s[e + 1] < '0' || s[e + 1] > '9')
	break;
	f = 0;
	}
	e++;
	}

	if (f == 0)
	return (0);

	return (n);
}
