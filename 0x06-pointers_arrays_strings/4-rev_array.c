#include "main.h"

/**
  * reverse_array - function that reverses array content
  * @a: parameter one
  * @n: parameter two
  * Return: return 0
  */

void reverse_array(int *a, int n)
{
	int e;
	int j;

	for (e = 0; e < n--; e++)
	{
	j = a[e];
	a[e] = a[n];
	a[n] = j;
	}
}
