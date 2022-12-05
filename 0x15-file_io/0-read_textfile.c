#include "main.h"

/**
 * read_textfile - reads a text file and prints its to the POSIX standard output
 * @filename: the file name
 * @letters: is the number of letters it should read and print
 * Return: 0 if the file can not be opened or read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, status, i;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);

	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);

	for (i = 0; text_content[i] != '\0'; i++)
		;
	status = write(fd, text_content, i);
	if (status == -1)
		return (-1);

	close(fd);
	return (1);
}
