#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile- function that reads text file and prints it to POSIX stdout
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: k- actual number of bytes to be read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *ruf;
	ssize_t j;
	ssize_t k;
	ssize_t l;

	j = open(filename, O_RDONLY);
	if (j == -1)
		return (0);
	ruf = malloc(sizeof(char) * letters);
	l = read(j, ruf, letters);
	k = write(STDOUT_FILENO, ruf, l);

	free(ruf);
	close(j);
	return (k);
}

