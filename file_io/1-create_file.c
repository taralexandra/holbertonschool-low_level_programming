#include "main.h"

/**
 * create_file - Creates a file with the given text content
 * @filename: Name of the file to create
 * @text_content: Text content to write to the file
 *
 * Return: 1 in case of success, -1 for failure.
 */

int create_file(const char *filename, char *text_content)
{
	int file;
	ssize_t bytes_written;
	size_t len = 0;

	if (filename == 0)
	{
		return (-1);
	}
	/**Nomenclature permission rw-------*/
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

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
