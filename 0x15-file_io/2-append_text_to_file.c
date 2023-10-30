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
 * append_text_to_file - appends text at the end of a file.
 * @filename: the name of the file to append to.
 * @text_content: the NULL terminated string to add at the end of the file
 * Description: Do not create the file if it does not exist
 * If filename is NULL return -1
 * If text_content is NULL, do not add anything to the file.
 * Return 1 if the file exists and -1 if the file does not exist
 * or if you do not have the required permissions to write the file
 * Return: 1 on success and -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int num_write;

	if (!filename)
		return (-1);

	/* open file if it exists */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	/* if nothing to write, still successful. Do not add anything to the file. */
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
