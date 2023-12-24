#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"
/**
 * read_textfile - Read text file and print to POSIX standard output
 *
 * @filename: Constant string parameter
 * @letters: Unsigned integral parameter
 *
 * Description: Read text file and print it to POSIX standard out put.
 *
 * Return: Unsigned interger
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	char *buffer;
	ssize_t bytes_written;
	ssize_t bytes_read;
	if (filename == NULL)
		return (0);

	file= fopen(filename, "r");

	if (file == NULL)
		return (0);

	buffer = (char *)malloc(letters);

	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}

	bytes_read = fread(buffer, 1, letters, file);

	if (bytes_read <= 0)
	{
		free(buffer);
		fclose(file);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	free(buffer);
	fclose(file);

	if (bytes_written != bytes_read)
		return (0);

	return (bytes_written);
}
