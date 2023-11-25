#include "main.h"

/**
  * flip_bits - checks number of bits to flip
  * @n: function parameter (number 1)
  * @m: function parameter (num 2)
  * Return: return result
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int e = 0;
int bit__ct = 0;
unsigned long int cur_num;
unsigned long int pow = n ^ m;
for (e = 63; e >= 0; e--)
	{
	cur_num = pow >> e;
	if (cur_num & 1)
		{
		bit__ct++;
		}
	}
return (bit__ct);
}

