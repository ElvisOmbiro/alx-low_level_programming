#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- function reading a text file and prints it 
 * to the POSIX standard output.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w-  actual number of bytes to be read and printed
 * 0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *ruf;
	ssize_t q;
	ssize_t w;
	ssize_t r;

	q = open(filename, O_RDONLY);
	if (q == -1)
		return (0);
	ruf = malloc(sizeof(char) * letters);
	r = read(q, ruf, letters);
	w = write(STDOUT_FILENO, ruf, r);

	free(ruf);
	close(q);
	return (w);
}
