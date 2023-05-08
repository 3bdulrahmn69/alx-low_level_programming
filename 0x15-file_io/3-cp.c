#include "main.h"
#define BUFFER_SIZE 1024

/**
 * main - main function
 * @argc: int
 * @argv: char
 */
int main(int argc, char *argv[])
{
	int fh_from = open(argv[1], O_RDONLY);
	int fh_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	if (fh_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (fh_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((bytes_read = read(fh_from, buffer, BUFFER_SIZE)) > 0)
	{
		ssize_t bytes_written = write(fh_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Write to %s failed\n", argv[2]);
			exit(99);
		}
	}
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Read from %s failed\n", argv[1]);
		exit(98);
	}
	if (close(fh_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fh_from);
		exit(100);
	}
	if (close(fh_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fh_to);
		exit(100);
	}
	return (0);
}
