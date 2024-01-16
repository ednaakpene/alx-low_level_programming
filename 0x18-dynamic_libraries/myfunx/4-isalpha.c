#include "main.h"
/**
 * _isalpha - entry point
 * @c: The parameter
 * Return: return 1 for all
 */

int _isalpha(int c)

{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
