#include "main.h"
/**
  * error_file - function that checks for opened files
  * @file_from: file to copy from
  * @file_to: file location to copy to
 * @argv: arg vector.
 * Return: return void
 */
void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - entry point
  * @argc: arg number
  * @argv: arg vector
  * Return: return 0
 */
int main(int argc, char *argv[])
{
int file_from, file_to, err_cl;
ssize_t nu_char, nu_wri;
char b[1024];

if (argc != 3)
	{
	dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
	exit(97);
	}

file_from = open(argv[1], O_RDONLY);
file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
error_file(file_from, file_to, argv);
nu_char = 1024;

while (nu_char == 1024)
	{
	nu_char = read(file_from, b, 1024);
	if (nu_char == -1)
		error_file(-1, 0, argv);
	nu_wri = write(file_to, b, nu_char);
	if (nu_wri == -1)
		error_file(0, -1, argv);
	}

err_cl = close(file_from);
if (err_cl == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
	exit(100);
	}
err_cl = close(file_to);
if (err_cl == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
	exit(100);
	}
return (0);
}
