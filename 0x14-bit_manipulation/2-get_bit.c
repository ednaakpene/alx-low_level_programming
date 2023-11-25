#include"main.h"

/**
 * get_bit - it gives the value of a bit at any exponenent
 * @n: function parameter (number to check bits)
 * @index: index (starts from zero)
 * Return: return result, or -1 if unsuccessful
 */

int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int divide_r;
unsigned long int bit_chk;

if (index > (sizeof(unsigned long int) * 8 - 1))
{
	return (-1);
}
divide_r = 1 << index;
bit_chk = n & divide_r;
if (bit_chk == divide_r)
{
	return (1);
}
return (0);
}
