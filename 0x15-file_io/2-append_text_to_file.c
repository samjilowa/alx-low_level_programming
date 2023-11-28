
#include <stdlib.h>
#include "main.h"
/**
 * append_text_to_file - ppends text at the end of a file.
 * @filename: mae of the filename
 * @text_content: NULL terminated string to add at end of the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor;
	int length;
	int written;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		return (1);
	}

	file_descriptor = open(filename, O_WRONLY | O_APPEND);
	if (file_descriptor == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		length = 0;
		while (text_content[length])
		{
			length++;
		}
		written = write(file_descriptor, text_content, length);
		if (written == -1)
		{
			return (-1);
		}
	}
	close(file_descriptor);
	return (1);
}
