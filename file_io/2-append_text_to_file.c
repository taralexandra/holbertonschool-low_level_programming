#include "main.h"

/**
  * append_text_to_file - Appends text at
  * the end of a file.
  * @filename: the name of the file.
  * @text_content: The NULL terminated string
  * to add at the end (append) of the file.
  *
  * Return: 1 on success and -1 for failure.
  */

int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	ssize_t bytes_written;
	size_t len = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		while (text_content[len])
		{
			len++;
		}

		bytes_written = write(file, text_content, len);

		if (bytes_written == -1 || (size_t)bytes_written != len)
		{
			close(file);
			return (-1);
		}
	}

	if (close(file) == -1)
	{
		return (-1);
	}

	return (1);
}

