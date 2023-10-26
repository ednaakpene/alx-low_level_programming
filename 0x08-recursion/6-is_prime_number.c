#include "main.h"

int actual_prime(int n, int e);
/**
  * is_prime_number - indicates if a number is prime or not
  * @n: number to be checked
  * Return: return 1 if prime number, return 0 if not
  */

int is_prime_number(int n)


{
	if (n <= 1)
{
	return (0);
}
	return (actual_prime(n, n - 1));
}

/**
  * actual_prime - calculates if a number is prime
  * @n: number given
  * @e: parameter
  * Return: return 1 prime, 0 if not
  */


int actual_prime(int n, int e)
{
	if (e == 1)
{
	return (1);
}
else if (n % e == 0 && e > 0)
{
	return (0);
}
return (actual_prime(n, e - 1));
}
