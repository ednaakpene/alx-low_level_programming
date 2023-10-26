#include "main.h"
int _strlen_recursion(char *s);
int check_pal(char *s, int e, int length);

/**
  * is_palindrome - indicates if string is palindrome or not
  * @s: parameter of function
  * Return: return 1 if palindrome, 0 if not
  */

int is_palindrome(char *s)

{
if (*s == 0)
{
	return (1);
}
return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
  * _strlen_recursion - returns the length of a string
  * @s: string
  * Return: return length of the string
  */

int _strlen_recursion(char *s)
{
if (*s == '\0')
{
	return (0);
}
return (1 + _strlen_recursion(s + 1));
}

/**
  * check_pal - checks for palindrome
  * @s: string
  * @e: parameter
  * @length: length of the string
  *Return: return 1 if palindrome, 0 if not
  */
int check_pal(char *s, int e, int length)
{
if (*(s + e) != *(s + length - 1))
{
	return (0);
}
else if (e >= length)
{
	return (1);
}
else
	return (check_pal(s, e + 1, length - 1));
}
