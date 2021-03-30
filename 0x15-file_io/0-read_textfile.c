#include "holberton.h"
/**
 * read_textfile - reads a text file and prints
 * it to the POSIX standard output.
 * @filename: file name.
 * @letters: number of characters.
 * Return: characters prints.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int o, r, w;
	char *buf;

	if (filename == NULL)
	{
		return (0);
	}

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		return (0);
	}
	o = open(filename, O_RDONLY);
	if (o == -1)
	{
		free(buf);
		return (0);
	}
	r = read(o, buf, letters);
	if (r == -1)
	{
		free(buf);
		return (0);
	}
	w = write(STDOUT_FILENO, buf, r);
	if (w != r)
	{
		free(buf);
		return (0);
	}
	free(buf);
	close(o);

	return (w);
}
