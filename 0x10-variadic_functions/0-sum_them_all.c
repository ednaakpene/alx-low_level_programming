#include "variadic_functions.h"
#include <stdarg.h>


/**
  * sum_them_all - function that returns the sum of all its paramters.
  * @n: number of paramters
  * @...: number of paramaters to calculate the sum of.
  * Return: return 0 if n == 0, if not,the sum of all parameters.
  */

int sum_them_all(const unsigned int n, ...)
{
va_list arg;
unsigned int e, sum = 0;

va_start(arg, n);

for (e = 0; e < n; e++)
{
sum += va_arg(arg, int);
}
va_end(arg);
return (sum);
}
