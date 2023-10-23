#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: string
 * @c: character in string
 * Return: return 0
 */

char *_strchr(char *s, char c)
{
int e;

for (e = 0; s[e] >= '\0'; e++)
	{
if (s[e] == c)
	return (s + e);
	}
return (0);
}
