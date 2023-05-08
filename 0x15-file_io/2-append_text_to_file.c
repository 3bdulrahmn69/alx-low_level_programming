#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: char
 * @text_content: char
 * Return: 1, -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fh, result;

	if (filename == NULL)
	{
		return (-1);
	}
	fh = open(filename, O_WRONLY | O_APPEND);
	if (fh == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		result = write(fh, text_content, strlen(text_content));
		if (result == -1)
		{
			close(fh);
			return (-1);
		}
	}
	close(fh);
	return(1);
}
