#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * read_textfile - reads a text file and prints it to STDOUT
 * @filename: file name to read data from
 * @letters: number fo character to print
 *
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t result = 0;
	ssize_t read_count = 0;
	ssize_t write_count = 0;
	int fd = 0;
	char *buf = NULL;

	buf = malloc(letters);
	if (buf == NULL)
		return (result);
	if (filename != NULL)
	{
		fd = open(filename, O_RDONLY);
		if (fd > 0)
		{
			read_count = read(fd, buf, letters);
			write_count =  write(STDOUT_FILENO, buf, read_count);
			if (write_count == read_count)
				result = write_count;
		}

	}
	free(buf);
	return (result);
}
