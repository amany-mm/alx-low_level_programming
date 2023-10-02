#include "main.h"


/**
 * _strlen - returns the length of a string.
 * @s: int pointer
 * Return: Length of a string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
		len++, s++;

	return (len);
}


/**
 * create_file - creates a file.
 * @filename: the name of the file to create
 * @text_content: a NULL terminated string to write to the file
 * Description: The created file must have those permissions: rw-------.
 * If the file already exists, do not change the permissions.
 * if the file already exists, truncate it
 * if filename is NULL return -1
 * if text_content is NULL create an empty file
 * Return: 1 on success, -1 on failure (file can not be created,
 * file can not be written, write “fails”, etc…)
*/
int create_file(const char *filename, char *text_content)
{
	int fd;
	int num_write;

	if (!filename)
		return (-1);

	/**
	 * create with permissions if file doesn't exist, else truncate
	 * file permision #rw------- == 0600
	*/
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	/* if nothing to write, just return new empty created file */
	if (!text_content)
	{
		close(fd);
		return (1);
	}

	/* write */
	num_write = write(fd, text_content, _strlen(text_content));

	if (num_write == -1 || num_write != _strlen(text_content))
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
