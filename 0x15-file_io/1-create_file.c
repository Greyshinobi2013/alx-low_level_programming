#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
/**
 * create_file - Create file
 *
 * @filename: Constant string parameter
 * @text_content: String parameter
 *
 * Return: If successful (0) else (-1)
 */

int create_file(const char *filename, char *text_content)
{
	/* Open the file for writing */
	/*(create if it doesn't exist, truncate if it does)*/
	int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (filename == NULL)
		return (-1);

	if (fd == -1)
		return (-1);

	/* If text_content is not NULL, write it to the file*/
	if (text_content != NULL)
	{
		ssize_t bytes_written = write(fd, text_content, strlen(text_content));

		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	}

	/* Close the file*/
	close(fd);
	return (1);
}
