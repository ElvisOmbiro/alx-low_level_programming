#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_file -  function that creates a file..
 * @filename:  the name of the file to create
 * @text_content:  a NULL terminated string to write to the file
 *
 * Return: If the function fails or filename is null -1.
 * Otherwise  1.
 */
int create_file(const char *filename, char *text_content)
{
	int p, t, l = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}

	p = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	t = write(p, text_content, l);

	if (p == -1 || t == -1)
		return (-1);

	close(p);

	return (1);
}

