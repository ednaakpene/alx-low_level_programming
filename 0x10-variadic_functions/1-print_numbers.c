#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>


/**
  * print_numbers - Prints numbers, followed by a new line.
  * @separator: The string to be printed
  * @n: The number of integers
  * @...: number of numbers to be printed
  * Return: return void
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list num;
unsigned int e;
va_start(num, n);

for (e = 0; e < n; e++)
{
if (e == 0 && separator)
{
	printf("%d", va_arg(num, int));
}
else if (!separator)
{
	printf("%d", va_arg(num, int));
}
else
{
	printf("%s%d", separator, va_arg(num, int));
}
}
va_end(num);
printf("\n");
}



