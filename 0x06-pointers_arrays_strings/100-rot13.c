#include "main.h"
#include <stdio.h>

/**
 * rot13 - function that encodes string
 *
 * @s: parameter
 * Return: return s
 */

char *rot13(char *s)
{
int e;
int j;
char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (e = 0; s[e] != '\0'; e++)
	{
	for (j = 0; j < 52; j++)
	{
	if (s[e] == data1[j])
	{
	s[e] = datarot[j];
	break;
	}
	}
	}
return (s);
}
