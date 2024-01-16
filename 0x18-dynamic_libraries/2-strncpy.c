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
int e = 0;

while (e < n && src[e] != '\0')
{
	dest[e] = src[e];
	e++;
}
	while (e < n)
	{
	dest[e] = '\0';
	e++;
	}
return (dest);

}
