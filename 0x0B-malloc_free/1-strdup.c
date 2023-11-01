#include "main.h"

/**
  * _strdup - returns pointer to a new string
  * @str: string to be duplicated
  * Return: return pointer , or NULL if it fails
  */

char *_strdup(char *str)
{
char *duplicate;
int e = 0;
int j;
if (str == NULL)
{
	return (NULL);
}

for (j = 0; str[j] != '\0'; j++)
{
	e++;
}
duplicate = malloc(sizeof(char) * e + 1);
if (duplicate == NULL)
{
	return (NULL);
}

for (j = 0; str[j] != '\0'; j++)
{
	duplicate[j] = str[j];
}
return (duplicate);
}
