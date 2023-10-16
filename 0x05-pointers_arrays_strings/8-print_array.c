#include "main.h"
/**
 * print_array - print array of integers
 * @a: parameter one
 * @n: parameter two
 */

void print_array(int *a, int n)
{
int e;

for (e = 0; e < n; e++)
{
printf("%d", a[e]);
{
if (e < n - 1)
	printf(", ");
}

}
printf("\n");
}
