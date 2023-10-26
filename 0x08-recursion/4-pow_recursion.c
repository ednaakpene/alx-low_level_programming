#include "main.h"

/**
  * _pow_recursion - returns value of a number raised to another
  * @x: first parameter of function
  * @y: second parameter of function
  * Return: return value of the given number raised to power of a number
  */

int _pow_recursion(int x, int y)
{
if (y < 0)
	{
	return (-1);
	}
else if (y > 0)
	{
return (x * _pow_recursion(x, (y - 1)));
	}
else if (y == 0)
	{
return (1);
	}
return (0);
}
