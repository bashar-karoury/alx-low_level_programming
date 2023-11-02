#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
void exit_print_stderr(int exitcode, int fd_r, int fd_w, char **av);
/**
 * main - check the code
 *@ac : number of argumets
 *@av: double pointer to arguments
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int file_to_fd = -1;
	int file_from_fd = -1;
	int write_result = 1, result = 0;
	int read_count = 1;
	char buffer[1024] = {0};

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (av == NULL || av[1] == NULL || av[2] == NULL)
		return (0);
	file_to_fd =  open(av[2], O_CREAT | O_TRUNC | O_WRONLY, S_IRUSR | S_IWUSR
			| S_IRGRP | S_IWGRP | S_IROTH);

	if (file_to_fd < 0)
		exit_print_stderr(99, file_from_fd, file_to_fd, av);

	file_from_fd =  open(av[1], O_RDONLY);
	if (file_from_fd < 0)
		exit_print_stderr(98, file_from_fd, file_to_fd, av);

	while ((result == 0) && (read_count > 0))
	{
		read_count = read(file_from_fd, buffer, 1024);
		if (read_count == -1)
		{
			exit_print_stderr(98, file_from_fd, file_to_fd, av);
		}
		write_result =  write(file_to_fd, buffer, read_count);
		if ((write_result == -1) || (write_result != read_count))
		{
			exit_print_stderr(99, file_from_fd, file_to_fd, av);
		}
	}
	exit_print_stderr(result, file_from_fd, file_to_fd, av);
	return (0);
}

/**
 * exit_print_stderr - exit with passed exitcode and print to stderr
 * @exitcode: exitcode
 * @fd_r: read file describtor
 * @fd_w: write file describtor
 * @av: arguments passed to main
 */
void exit_print_stderr(int exitcode, int fd_r, int fd_w, char **av)
{
	switch (exitcode)
	{
		case 98:
			dprintf(2, "Error: Can't read from file %s\n", av[1]);
			exit(98);
			break;
		case 99:
			dprintf(2, "Error: Can't write to %s\n", av[2]);
			exit(99);
			break;
	}
	if (fd_r > 0)
	{
		if (close(fd_r))
		{
			dprintf(2, "Error: Can't close fd %d\n", fd_r);
			exit(100);
		}
	}
	if (fd_w > 0)
	{
		if (close(fd_w))
		{
			dprintf(2, "Error: Can't close fd %d\n", fd_w);
			exit(100);
		}
	}
}
