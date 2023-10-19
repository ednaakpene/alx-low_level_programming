#include "main.h"
#include <stdio.h>
/**
  *leet - function that encodes strings
  * @n: parameter
  *Return: return n
 */

char *leet(char *n)
{
int e;
int j;
char s1[] = "aAeEoOtTlL";
char s2[] = "4433007711";

for (e = 0; n[e] != '\0'; e++)
	{
	for (j = 0; j < 10; j++)
	{
	if (n[e] == s1[j])
	{
	n[e] = s2[j];
	}
	}
	}
return (n);
}
