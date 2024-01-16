#include "main.h"

/**
  * _strstr - function that finds the first occurence of substring
  * @needle: substring
  * @haystack: string
  * Return: return 0
  */

char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *E = haystack;
char *F = needle;

while (*E == *F && *F != '\0')
	{
	E++;
	F++;
	}
if (*F == '\0')
return (haystack);
	}
return (0);
}
