#include "main.h"

/**
  * clear_bit - it sets the value of a bit to 0 at  given exponent
  * @n: function parameter (number of bit)
  * @index: exponent of number
  * Return: return 1 on success, -1 on failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > sizeof(n) * 8)
{
	return (-1);
}
*n = (*n) - ((1 << index) & (*n));
return (1);
}
