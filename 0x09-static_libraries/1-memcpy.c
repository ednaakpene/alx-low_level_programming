#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @dest: second memory area
 * @src: first memory area
 * @n: parameter for number of bytes
 * Return: return dest
 */


char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int e;

for (e = 0; e < n; e++)
	{
	dest[e] = src[e];
	}
return (dest);
}
