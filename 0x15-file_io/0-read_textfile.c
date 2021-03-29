#include "holberton.h"
/**
 * read_textfile - reads a text file and prints
 * it to the POSIX standard output.
 * @filename: file name.
 * @letters: number of letras.
 * Return: number of characters prints.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int o, r, w;
	char buf[letters];

	if (filename == NULL)
	{
		return (0);
	}
	o = open(filename, O_RDONLY);
	r = read(o, buf, letters);
	w = write(STDOUT_FILENO, buf, r);

	close(o);

	return (w);
}
