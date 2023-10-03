#include <stdlib.h>
#include "main.h"
#include <stdio.h>


/**
 * append_text_to_file -  function that appends text at the end of a file.
 * @filename: the name of the file
 * @text_content:  the NULL terminated string to add at the end of the file
 *
 * Return: If the function fails or filename is NULL -2.
 * If the file does not exist the user lacks write permissions -2.
 * Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int r, s, l = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}

	r = open(filename, O_WRONLY | O_APPEND);
	s = write(r, text_content, l);

	if (r == -1 || s == -1)
		return (-1);

	close(r);
	return (1);
}

