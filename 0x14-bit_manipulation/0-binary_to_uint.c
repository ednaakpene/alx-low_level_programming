#include "main.h"

/**
  * binary_to_uint - it converts binary numbers to an unsigned int
  * @b: pointer to a string of binary numbers (0 and 1 characters)
 * Return: return result or 0 if unsuccessful
 */

unsigned int binary_to_uint(const char *b)
{
int num_e;
unsigned int num_j;
num_j = 0;

if (b == NULL)
	{
	return (0);
	}
for (num_e = 0; b[num_e] != '\0'; num_e++)
{
	if (b[num_e] != '0' && b[num_e] != '1')
	{
	return (0);
	}
}
for (num_e = 0; b[num_e] != '\0'; num_e++)
{
num_j <<= 1;
	if (b[num_e] == '1')
	{
	num_j += 1;
	}
}
return (num_j);
}
