#include "main.h"

/**
  * _pow - it calculates the reult a number raised to another number
  * @base: function parameter (base of the index)
  * @power: function parameter (power of the index)
 * Return: return result
 */
unsigned long int _pow(unsigned int base, unsigned int power)

{
unsigned int bp;
unsigned long int num_bp;
num_bp = 1;
for (bp = 1; bp <= power; bp++)
{
	num_bp *= base;
}
return (num_bp);
}

/**
 * print_binary - it prints a given number in base 2
 * @n: function parameter(the number to print)
 * Return: return void
 */

void print_binary(unsigned long int n)
{
unsigned long int divide_r;
char fg;
unsigned long int bit_chk;

fg = 0;
divide_r = _pow(2, sizeof(unsigned long int) * 8 - 1);
while (divide_r > 0)
{
bit_chk = n & divide_r;
if (fg == 1 || divide_r == 1)
	{
	_putchar(bit_chk ? '1' : '0');
	}
else if (bit_chk == divide_r)
	{
	fg = 1;
	_putchar('1');
	}
divide_r >>= 1;
}
}
