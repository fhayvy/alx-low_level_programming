#include "main.h"


/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename: A pointer to the file
 * @letters: Number of letters it should read and print
 *
 * Return: The actual number of letters it can read and print
 */


ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int fd;
	ssize_t rread, written;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}

	buf = malloc(sizeof(char) * letters);

	if (!buf)
	{
		return (0);
	}

	rread = read(fd, buf, letters);
	written = write(STDOUT_FILENO, buf, rread);

	close(fd);

	free(buf);

	return (written);
}
