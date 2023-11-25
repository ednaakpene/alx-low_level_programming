#include "main.h"

/**
  * set_bit - it sets the value of a bit to 1 at given exponent
  * @n: function parameter (number of bit)
  * @index: exponent
 * Return: return 1 on success, -1 on failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int bit_val;

if (index > (sizeof(unsigned long int) * 8 - 1))
{
	return (-1);
}
bit_val = 1 << index;
*n |= bit_val;
return (1);
}
