#include "lists.h"
/**
 * bef_main - function that is executed before main
 * Return: return void
 */

void __attribute__ ((constructor)) bef_main()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
