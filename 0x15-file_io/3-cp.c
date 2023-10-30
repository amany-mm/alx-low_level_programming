#include "main.h"


/**
 * __exit - prints error messages and exits with exit value
 * @error: num is either exit value or file descriptor
 * @file_name: file name, either of the two filenames
 * @fd: file descriptor
 * Return: 0 on success
 **/
int __exit(int error, char *file_name, int fd)
{
	switch (error)
	{
		case 97:
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			exit(error);

		case 98:
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_name);
			exit(error);

		case 99:
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_name);
			exit(error);

		case 100:
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
			exit(error);

		default:
			return (0);
	}
}


/**
 * main - copies one file to another
 * @argc: should be 3 (./a.out copy_from_file copy_to_file)
 * @argv: 1st is file to copy from (fd_1), 2nd is file to copy to (fd_2)
 * Return: 0 (success), 97-100 (exit value errors)
 */
int main(int argc, char *argv[])
{
	char *buffer[1024];
	int fd_1, fd_2, num_read, num_write;
	char  *file_from, *file_to;

	if (argc != 3)
		__exit(97, NULL, 0);

	file_from = argv[1];
	file_to = argv[2];

	/* sets file descriptor for copy-to file with permission rw-rw-r-- */
	fd_2 = open(file_to, O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fd_2 == -1)
		__exit(99, file_to, 0);

	/*sets file descriptor for copy-from file*/
	fd_1 = open(file_from, O_RDONLY);
	if (fd_1 == -1)
		__exit(98, file_from, 0);

	/**
	 * reads original file as long as there's more than 0 to read
	 * copies/writes contents into new file
	*/
	while ((num_read = read(fd_1, buffer, 1024)) != 0)
	{
		if (num_read == -1)
			__exit(98, file_from, 0);

		num_write = write(fd_2, buffer, num_read);
		if (num_write == -1)
			__exit(99, file_to, 0);
	}

	close(fd_2) == -1 ? (__exit(100, NULL, fd_2)) : close(fd_2);
	close(fd_1) == -1 ? (__exit(100, NULL, fd_1)) : close(fd_1);
	return (0);

}
