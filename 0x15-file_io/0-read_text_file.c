#include "main.h"

/*
 * read_textfile - Reads a text file and prints it to POSIX stdout
 * @filename: The name of the file to read
 * @letters: The number of letters to read and print
 * Return: The number of letters read and printed, or 0 if there's an error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    int fd;            /* File descriptor */
    ssize_t rcount, wcount;  /* Read and write count */
    char *buffer;      /* Buffer to store read data */

    if (filename == NULL)
        return (0);

    /* Open the file for reading and writing */
    fd = open(filename, O_RDWR);
    if (fd == -1)
        return (0);

    /* Allocate memory for the buffer */
    buffer = malloc(sizeof(char) * letters);
    if (buffer == NULL)
    {
        free(buffer);
        return (0);
    }

    /* Read data from the file into the buffer */
    rcount = read(fd, buffer, letters);
    if (rcount == -1)
        return (0);

    /* Write the read data to stdout */
    wcount = write(STDOUT_FILENO, buffer, rcount);
    if (wcount == -1 || rcount != wcount)
        return (0);

    /* Free the allocated buffer */
    free(buffer);

    /* Close the file */
    close(fd);

    return (wcount); /* Return the number of letters read and printed */
}
