#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: first parameter of function
 * @accept: second parameter of function
 * Return: return 0
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int e = 0;
int j;

while (*s)
{

for (j = 0; accept[j]; j++)
{
if (*s == accept[j])
	{
	e++;
	break;
	}
else if (accept[j + 1] == '\0')
	return (e);
}
s++;
}
return (e);
}
