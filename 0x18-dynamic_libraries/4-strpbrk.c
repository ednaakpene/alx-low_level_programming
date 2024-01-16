#include "main.h"

/**
 * _strpbrk - function that locates for any of a set of bytes
 * @s: string
 * @accept: second parameter
 * Return: return 0
 */

char *_strpbrk(char *s, char *accept)
{
int e;
int f;

for (e = 0; s[e] != '\0'; e++)
{
for (f = 0; accept[f] != '\0'; f++)
	{
	if (s[e] == accept[f])
	return (s + e);
	}
}
return (0);
}
