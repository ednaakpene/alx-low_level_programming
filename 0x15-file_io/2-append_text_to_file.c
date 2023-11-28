#include "main.h"

/**
  * append_text_to_file - function that adds text to end of file
  * @filename: function parameter (name of file)
  * @text_content: function parameter (content of file)
 * Return: return 1 on succes, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fdesc;
int numof_let;
int perm;

if (filename == NULL)
	{
	return (-1);
	}
fdesc = open(filename, O_WRONLY | O_APPEND);
if (fdesc == -1)
	{
	return (-1);
	}
if (text_content)
	{
	for (numof_let = 0; text_content[numof_let]; numof_let++)
	perm = write(fdesc, text_content, numof_let);
		if (perm == -1)
		{
		return (-1);
		}
	}
close(fdesc);
return (1);
}
