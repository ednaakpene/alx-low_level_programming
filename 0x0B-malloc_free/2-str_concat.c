#include "main.h"

/**
  * str_concat - function that concatenates two strings
  * @s1: first string
  * @s2: secomd string
  * Return: return pointer, NULL if fails
  */

char *str_concat(char *s1, char *s2)
{
int e;
int lens1 = 0;
int lens2 = 0;
char *result;
if (s1 == NULL)
{
	s1 = "";
}
if (s2 == NULL)
{
	s2 = "";
}

for (e = 0; s1[e] != '\0'; e++)
{
	lens1++;
}
for (e = 0; s2[e] != '\0'; e++)
{
	lens2++;
}
result = malloc(sizeof(char) * (lens1 + lens2) + 1);
if (result == NULL)
{
	return (NULL);
}

for (e = 0; s1[e] != '\0'; e++)
{
	result[e] = s1[e];
}
for (e = 0; s2[e] != '\0'; e++)
{
	result[lens1 + e] = s2[e];
}
return (result);
}
