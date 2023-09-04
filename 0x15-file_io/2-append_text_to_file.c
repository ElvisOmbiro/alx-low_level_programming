#include "main.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * append_text_to_file - a function that appends text at the end of a file.
 * @filename: is the name of the file
 * @text_content:  is the NULL terminated string to add at the end of the file
 *
 * Return: If the function fails or filename is NULL -2.
 *         If the file does not exist the user lacks write permissions -2.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int j, k, l = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}

	j = open(filename, O_WRONLY | O_APPEND);
	k = write(j, text_content, l);

	if (j == -1 || k == -1)
		return (-1);

	close(j);

	return (1);
}

