#include <stdio.h>
#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of file
 * @text_content: pointer to string
 * Return: 1 or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)

		return (-1);

	if (text_content)
	{
		if (write(fd, text_content, _strlen(text_content)) == -1)

			return (-1);
	}

	close(fd);

	return (1);
}

/**
 * _strlen - length of a string to return
 * @s: string to count
 * Return: length of string
 */

int _strlen(char *s)
{
	int c = 0;

	while (s[c])
		c++;

	return (c);
}
