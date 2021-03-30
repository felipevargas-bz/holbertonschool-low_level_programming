#include "holberton.h"
/**
 * create_file - creates a file.
 * @filename: file name.
 * @text_content: number of characters.
 * Return: 1 always.
*/
int create_file(const char *filename, char *text_content)
{
	int o, w, size = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		while (text_content[size] != '\0')
		{
			size++;
		}
	}
	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, size);

	if (o == -1)
	{
		return (-1);
	}
	if (w == -1)
	{
		return (-1);
	}
	close(o);

	return (1);
}
