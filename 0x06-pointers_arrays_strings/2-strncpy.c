#include "main.h"
/**
 * _strncpy - function that copies string
 * @dest: parameter one
 * @src: second parameter
 * @n: third parameter
 * Return: return dest
 */


char *_strncpy(char *dest, char *src, int n)
{
int e;

for (e = 0; e < n && src[e] != '\0'; e++)
{
	while (e < n)
	{
	dest[e] = '\0';
	e++;
	}
}
return (dest);

}
