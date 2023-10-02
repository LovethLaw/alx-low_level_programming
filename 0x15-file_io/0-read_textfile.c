#include "main.h"
#include <stdlib.h>
/**
 * read_textfile -  it should read text file print to STDOUT.
 * @letters: the actual number of letters it could read
 * @filename: the text file name being read
 * Return: The actual nub of bytes read and printed 0 when
 * the function fails or filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t w;
	ssize_t t;
	ssize_t fd;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	t = read(fd, buffer, letters);
	w = write(STDOUT_FILENO, buffer, t);
	free(buffer);
	close(fd);
	return (w);
}
