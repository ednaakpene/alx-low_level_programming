#include "main.h"

int actual_sqrt_recursion(int n, int e);
/**
  * _sqrt_recursion - returns natural square root of a given number
  * @n: number
  * Return: return the value of square root of n
  */

int _sqrt_recursion(int n)
{
if (n < 0)
{
	return (-1);
}
return (actual_sqrt_recursion(n, 0));
}


/**
  * actual_sqrt_recursion - finds the natural square root of given number
  * @e: parameter
  * @n: number given
  * Return: return the resulting square root of given number
  */

int actual_sqrt_recursion(int n, int e)
{
if (e * e > n)
{
	return (-1);
}
else if (e * e == n)
{
	return (e);
}
else

return (actual_sqrt_recursion(n, e + 1));
}
