#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"

/**
*char *create_buf(char *buf)
*{
	buf = malloc(sizeof(char) * 1024);
	if (!buf)
	{
		return (NULL);
	}
	return (buf);
}
*/
/**
 * closefd - check if field descriptor closed normally or not
 * @fd: int field descriptor
 * Return: Nothing
 */
void closefd(int fd)
{
	if (close(fd) != 0)
	{
		dprintf(2, "Error: Can't close fd %i\n", fd);
		exit(100);
	}
}
/**
 * main - copies content of  file to another file
 * @argc: number of args passed to main
 * @argv: array of pointers to args
 * Return:  0 on success 
 *
 * Description: if arguments number incorrect , exit code 97
 * 		if file_from does not exist or cannot read -exit code 98
 * 		if write in file_to fails or file cannot be created- exit code 99
 * 		if file_to or file_from cannot be closed -exit code 100 
 */
int main(int argc, char **argv)
{
	int from, to, re = -1, wr;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_no\n");
		exit (97);
	}
	from = open(argv[1], O_RDONLY);
	while (re != 0)
	{
		re = read(from, buf, 1024);
		if (from == -1 || re == -1)
		{
			dprintf(2, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
	
	to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
/*	buf = create_buf(buf);*/
	wr = write(to, buf, 1024);
	if (to == -1 || wr == -1 )
	{
		dprintf(2, "Error: Can't write to file %s\n", argv[2]);
/*		free(buf);*/
		exit(99);
	}
	to = open(argv[2], O_APPEND | O_WRONLY);
	}
	closefd(from);
	closefd(to);
	return (0);
}
