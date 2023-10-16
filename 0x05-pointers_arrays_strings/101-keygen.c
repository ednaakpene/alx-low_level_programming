#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - generates random valid passwords
 *Return: return 0
 */

int main(void)
{
int password[100];
int e;
int sum;
int n;

sum = 0;
srand(time(NULL));

	for (e = 0; e < 100; e++)
	{
	password[e] = rand() % 78;
	sum += (password[e] + '0');
	putchar(password[e] + '0');
	if ((2772 - sum) -'0' < 78)
	{
	n = 2772 - sum - '0';
	sum += n;
	putchar(n + '0');
	break;
	}
	}

	return (0);
}
