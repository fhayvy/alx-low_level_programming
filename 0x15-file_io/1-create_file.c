#include "main.h"


/**
 * create_file - Creates a file
 * @filename: The name of the file to create
 * @text_content: A null terminated string to write to the file
 *
 * Return: 1 on success and -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int letters = 0;
	int fd, new_txt;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = " ";

	while (text_content[letters])
	{
		new_txt = write(fd,  text_content, letters);
		letters++;

		if (new_txt == -1)
			return (-1);
	}


	close(fd);

	return (1);
}
