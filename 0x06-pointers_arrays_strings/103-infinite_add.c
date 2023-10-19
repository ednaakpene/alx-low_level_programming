#include "main.h"

/**
   * rev_string - function that reverses array
   * @n: parameter
   * Return: return 0
 */

void rev_string(char *n)
{
int e = 0;
int k = 0;
char temp;

while (*(n + e) != '\0')
	{
	e++;
	}
	e--;

for (k = 0; k < e; k++, e--)
	{
	temp = *(n + k);
	*(n + k) = *(n + e);
	*(n + e) = temp;
	}
}

/**
 * infinite_add - function add 2 numbers
 * @n1: first number to add
 * @n2: second number to add
 * @r: pointer to buffer
 * @size_r: size of buffer
 * Return: pointer to function
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int overflow = 0;
int e = 0;
int k = 0;
int digits = 0;
int val1 = 0;
int val2 = 0;
int temp_tot = 0;

	while (*(n1 + e) != '\0')
	e++;
	while (*(n2 + k) != '\0')
	k++;
	e--;
	k--;
if (k >= size_r || e >= size_r)
	return (0);
while (k >= 0 || e >= 0 || overflow == 1)
	{
	if (e < 0)
	val1 = 0;
	else
	val1 = *(n1 + e) - '0';
	if (k < 0)

	val2 = 0;
	else
	val2 = *(n2 + k) - '0';
	temp_tot = val1 + val2 + overflow;
	if (temp_tot >= 10)
	overflow = 1;
	else
	overflow = 0;
	if (digits >= (size_r - 1))
	return (0);
	*(r + digits) = (temp_tot % 10) + '0';
	digits++;
	k--;
	e--;
	}
if (digits == size_r)
	return (0);
*(r + digits) = '\0';
rev_string(r);
return (r);
}
