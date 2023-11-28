#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - reads a text file and prints it
 * @filename: file to be read
 * @letters: the number of letters function should read and print
 *
 * Return: Number of letters it could read & print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	int read_bytes;
	int printed_bytes;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}
	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
	{
		return (0);
	}
	read_bytes = read(file_descriptor, buffer, letters);
	if (read_bytes == -1)
	{
		return (0);
	}
	printed_bytes = write(STDOUT_FILENO, buffer, read_bytes);
	if (printed_bytes == -1)
	{
		return (0);
	}
	free(buffer);
	close(file_descriptor);
	return (printed_bytes);
}
