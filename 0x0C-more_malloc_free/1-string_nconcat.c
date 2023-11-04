#include "main.h"
#include <stdlib.h>

/**
  * string_nconcat - concatenates two strings
  * @s1: string one
  * @s2: string two
  * @n: number of bytes
  * Return: concatenated string
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int lens1 = 0, lens2 = 0, e;
char *result;
if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";
for (e = 0; s1[e] != '\0'; e++)
	lens1++;
for (e = 0; s2[e] != '\0'; e++)
	lens2++;
result = malloc(sizeof(char) * (lens1 + n + 1));
if (result == NULL)
{
	return (NULL);
}
if (n >= lens2)
{
	for (e = 0; s1[e] != '\0'; e++)
	{
		result[e] = s1[e];
	}
	for (e = 0; s2[e] != '\0'; e++)
	{
		result[lens1 + e] = s2[e];
	}
result[lens1 + e] = '\0';
}
else
{
	for (e = 0; s1[e] != '\0'; e++)
	{
	result[e] = s1[e];
	}
	for (e = 0; e < n; e++)
	{
	result[lens1 + e] = s2[e];
	}
result[lens1 + n] = '\0';
}
	return (result);
}
