#include "main.h"

/**
 * _strlen - a function to return a length of a string
 * @s: the string
 * Return: integer length to string
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
 * append_text_to_file - a function that append text at the end of a file
 * @filename: name of the file to create
 * @text_content: text ot write
 * Return: 1 on seccess -1 on error
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (len)
	bytes = write(fd, text_content, len);
	close(fd);
	return (bytes == len ? 1 : -1);
}
