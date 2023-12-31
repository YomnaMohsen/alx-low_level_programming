#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"
/**
 * closefd - check if field descriptor closed normally or not
 * @fd: int field descriptor
 * Return: Nothing
 */
void closefd(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - copies content of  file to another file
 * @argc: number of args passed to main
 * @argv: array of pointers to args
 * Return:  0 on success
 *
 */
int main(int argc, char *argv[])
{
	int from, to, re = -1, wr;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	from = open(argv[1], O_RDONLY);
	if (from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while (re != 0)
	{
		re = read(from, buf, 1024);
		if (re == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
			wr = write(to, buf, re);
			if (wr == -1)
			{
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
				exit(99);
			}
	}
	closefd(from);
	closefd(to);
	return (0);
}
