#include "main.h"

/**
 * _strlen_recursion -  main function that returns length of the string
 * @s: parameter of main function
 * Return: return length
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
	return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
