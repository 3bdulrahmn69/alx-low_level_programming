#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: const char
 * @text_content: char
 * Return: 1, -1
 */
int create_file(const char *filename, char *text_content)
{
	int fh, bytes_written = 0, mode = S_IRUSR | S_IWUSR;

	fh = open(filename, O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (filename == NULL)
	{
		return (-1);
	}
	if (fh < 0)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		while (text_content[bytes_written] != '\0')
		{
			bytes_written++;
		}
		bytes_written = write(fh, text_content, bytes_written);
		if (bytes_written < 0)
		{
			close(fh);
			return (-1);
		}
	}
	close(fh);
	return (1);
}
