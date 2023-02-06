#include "main.h"

/**
 * create_file - create a file
 * @filename: pointer to the name of filento create
 * @text_content: pointer to a string
 * Return: 1 or -1
 */

int create_file(const char *filename, char *text_content)
{
	int o, w. len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_CREATE | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
