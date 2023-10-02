#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the
 * POSIX standard output.
 * @filename: file name to read from
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int fd; /* file descriptor */
	ssize_t num_read, num_write;

	if (filename == NULL)
		return (0);

	/* open */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	/* malloc buffer */
	buffer = malloc(letters * sizeof(char));
	if (buffer == NULL)
		return (0);

	/* read */
	num_read = read(fd, buffer, letters);
	if (num_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	/* write */
	num_write = write(STDOUT_FILENO, buffer, num_read);
	if (num_write == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	close(fd);
	return (num_read);
}
