#include "main.h"

/**
 * _strlen - a function to return a length of a string
 * @s: the string
 * Return: integer length of string
 */

int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}

/**
 * create_file - a function that creates a file
 * @filename: name of the file to create
 * @text_content: text to write
 * Return: 1 on seccess 0 on error
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes = 0, len = _strlen(text_content);

	if (!filename)
		return (0);
	fd = open(filename, O_WRONLY | O_CEART | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (len)
	bytes = write(fd, text_content, len);
	close(fd);
	return (bytes == len ? 1 : -1);
}
