#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of file to be created
 * @text_content: Null terminated to be written to the file
 *
 * Return: 1 on success , -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int result = -1;
	int fd = -1;
	int i = 0;
	int write_count = 0;

	if (filename == NULL)
		return (result);

	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd < 0)
		return (result);

	while ((text_content != NULL) && (text_content[i] != '\0'))
	{
		write_count = write(fd, &(text_content[i]), 1);
		if (write_count != 1)
		{
			close(fd);
			return (result);
		}
		i++;
	}
	close(fd);
	result = 1;
	return (result);
}
