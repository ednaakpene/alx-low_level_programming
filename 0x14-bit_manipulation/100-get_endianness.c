#include "main.h"
/**
  * get_endianness - it checks the endianness
  * Return: return 0 if big , 1 if little
 */

int get_endianness(void)
{
unsigned int ej;
char *kl;
ej = 1;
kl = (char *)&ej;
if (*kl != 1)
{
	return (0);
}
else
{
return (1);
}
}
