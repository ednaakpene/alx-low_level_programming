#include "main.h"
#include <stdio.h>

/**
  * main - function that prints number of arguments of program
  * @argc: argument count
  * @argv: argument vector
  * Return: return 0
  */

int main(int argc, char *argv[])
{
(void) argv;
printf("%d\n", argc - 1);
return (0);
}
