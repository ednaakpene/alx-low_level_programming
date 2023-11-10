#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>


/**
  * print_all - function that prints anything
  * @format: list of types of arguments
  */
void print_all(const char * const format, ...)
{
int e = 0;
char *str, *sep = "";

va_list arg;
va_start(arg, format);
if (format)
{
while (format[e])
{
	switch (format[e])
{
	case 'c':
	printf("%s%c", sep, va_arg(arg, int));
	break;
	case 'i':
	printf("%s%d", sep, va_arg(arg, int));
	break;
	case 'f':
	printf("%s%f", sep, va_arg(arg, double));
	break;
	case 's':
	str = va_arg(arg, char *);
	if (!str)
	str = "(nil)";
	printf("%s%s", sep, str);
	break;
	default:
		e++;
		continue;
}
	sep = ", ";
	e++;
}
}
printf("\n");
va_end(arg);
}

