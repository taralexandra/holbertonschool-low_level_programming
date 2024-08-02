#include "main.h"

/**
  * read_textfile - Reads a text file and prints
  * it to the POSIX standard output.
  * @filename: the name of the file to read.
  * @letters: the nbre of letters to read (r) and print.
  *
  * Return: the actual number of letters it could read and print.
  * In case the file can not be opened or read, return 0.
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t opn, rd, wrt;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}

	opn = open(filename, O_RDONLY);
	if (opn == -1)
	{
		close(opn);
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(opn);
		return (0);
	}

	rd = read(opn, buffer, letters);
	if (rd == -1)
	{
		free(buffer);
		close(opn);
		return (0);
	}
	wrt = write(STDOUT_FILENO, buffer, rd);
	if (wrt == -1 || wrt != rd)
	{
		free(buffer);
		close(opn);
		return (0);
	}

	free(buffer);
	close(opn);
	return (wrt);
}
