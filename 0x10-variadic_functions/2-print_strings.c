#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>


/**
  * print_strings - function that prints strings, followed by a new line
  * @separator: The string to be printed
  * @n: number of strings
  * @...: number of strings to be printed
  * Return: return void
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list strings;
char *str;
unsigned int e;

va_start(strings, n);

for (e = 0; e < n; e++)
{
str = va_arg(strings, char *);
if (str == NULL)
{
	printf("(nil)");
}
if (!separator)
{
printf("%s", str);
}
else if (e == 0 && separator)
{
	printf("%s", str);
}
else
{
	printf("%s%s", separator, str);
}
}
va_end(strings);
printf("\n");
}


