#include "main.h"
#include <stdio.h>

/**
  * main - function that prints all arguments received
  * @argc: argument count
  * @argv: argument vector
  * Return: return 0
  */

int main(int argc, char *argv[])
{
int e;
for (e = 0; e < argc; e++)
	{
	printf("%s\n", argv[e]);
	}
return (0);
}
