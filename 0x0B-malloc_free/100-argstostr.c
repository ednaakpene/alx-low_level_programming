#include "main.h"
#include <stdlib.h>

/**
  * argstostr - concatenates program arguments
  * @ac: argument count
  * @av: argument vector
  * Return: return pointer, or NULL if fails
  */
		
char *argstostr(int ac, char **av)
		
{
int e, f, g, l;
int e, f, g, l = 0;
char *string;
if (ac == 0 || av == NULL)
{
	return (NULL);
}

for (i = 0; i < ac; i++)
		
	{
		
		for (n = 0; av[i][n]; n++)
		
			l++;
		
	}
		
	l += ac;
		

		
	str = malloc(sizeof(char) * l + 1);
		
	if (str == NULL)
		
		return (NULL);
		
	for (i = 0; i < ac; i++)
		
	{
		
	for (n = 0; av[i][n]; n++)
		
	{
		
		str[r] = av[i][n];
		
		r++;
		
	}
		
	if (str[r] == '\0')
		
	{
		
		str[r++] = '\n';
		
	}
		
	}
		
	return (str);
		
}
