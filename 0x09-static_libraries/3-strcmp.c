#include "main.h"

/**
 * _strcmp - function that compares two strings
 *@s1: first parameter of function
 *@s2: second parameter of function
 *Return: return 0, s1, s2
 */


int _strcmp(char *s1, char *s2)
{
int e = 0;
while (s1[e] != '\0' && s2[e] != '\0')
{
	if (s1[e] != s2[e])
	{
	return (s1[e] - s2[e]);
	}
	e++;
}
return (0);
}
