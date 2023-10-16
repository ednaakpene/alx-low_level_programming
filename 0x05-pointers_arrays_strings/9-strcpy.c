#include "main.h"
/**
 * _strcpy - function that copies string
 * @dest: parameter one
 * @src: parameter two
 * Return: return 0
 */

char *_strcpy(char *dest, char *src)
{
int e;

for (e = 0; src[e] != '\0'; e++)
{
	dest[e] = src[e];
}
dest[e] = '\0';
	return (dest);
}
