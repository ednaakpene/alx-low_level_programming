#include "main.h"
/**
 * read_textfile - it reads file and posts to standard output
 * @filename: function parameter (name of the file)
 * @letters: number of letters to print
 * Return: return number of printed letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int f_des;
ssize_t nu_read;
ssize_t nu_written;
char *b;

if (filename == NULL)
	{
	return (0);
	}
f_des = open(filename, O_RDONLY);

if (f_des == -1)
	{
	return (0);
	}
b = malloc(sizeof(char) * (letters));
if (b == NULL)
	{
	return (0);
	}
nu_read = read(f_des, b, letters);
nu_written = write(STDOUT_FILENO, b, nu_read);
close(f_des);
free(b);
return (nu_written);
}
