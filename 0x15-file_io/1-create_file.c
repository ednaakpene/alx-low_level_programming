#include "main.h"

/**
  * create_file - function that creates a file
  * @filename: function parameter (name of file to create)
 * @text_content: function parameter( content of file)
 * Return: return 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
int fdes;
int numof_let;
int perm;

if (filename == NULL)
	{
	return (-1);
	}
fdes = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (fdes == -1)
	{
	return (-1);
	}
if (text_content == NULL)
text_content = "";

for (numof_let = 0; text_content[numof_let]; numof_let++)
perm = write(fdes, text_content, numof_let);

if (perm == -1)
	{
	return (-1);
	}
close(fdes);
return (1);
}
