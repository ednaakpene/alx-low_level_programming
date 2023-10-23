#include "main.h"
#include <stdio.h>

/**
  * print_diagsums - prints the sum of two diagonals of square matrix
  * @size: parameter one
  * @a: parameter two
  * Return: return 0
  */

void print_diagsums(int *a, int size)
{
int count1;
int count2;
int e;

count1 = 0;
count2 = 0;

for (e = 0; e < size; e++)
{
	count1 = count1 + a[e * size + e];
}
for (e = size - 1; e >= 0; e--)
{
	count2 += a[e * size + (size - e - 1)];
}
printf("%d, %d\n", count1, count2);
}
