#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main - function that prints minimum number of coins for change
  * @argc: argument count
  * @argv: argument vector
  * Return: return 1 if number of arguments passed is not 1, else 0
  */

int main(int argc, char *argv[])
{
int coins = 0;
int cents = 0;
if (argc != 2)
{
	printf("Error\n");
	return (1);
}
cents = atoi(argv[1]);
while (cents > 0)
{
	coins++;
	if ((cents - 25) >= 0)
	{
		cents -= 25;
		continue;
	}
	else if ((cents - 10) >= 0)
	{
		cents -= 10;
		continue;
	}
	else if ((cents - 5) >= 0)
	{
	cents -= 5;
	continue;
	}
	else if ((cents - 2) >= 0)
	{
	cents -= 2;
	continue;
	}
	else if ((cents - 1) >= 0)
	{
	cents -= 1;
	continue;
	}
}
printf("%d\n", coins);
return (0);
}
