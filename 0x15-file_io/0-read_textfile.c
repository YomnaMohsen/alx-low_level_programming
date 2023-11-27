#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"
/**
 * read_textfile - reads file and prints it on std output
 * @filename: string file name to be read
 * @letters: int number of chars that will be read from file
 * Return:  number of chars printed on std output or -1 if any operation fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fo, fr, fw;
	char *buf;

	if (!filename)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);
	fo = open(filename, O_RDONLY);
	if (fo == -1)
		return (0);
	fr = read(fo, buf, letters);
	fw = write(STDOUT_FILENO, buf, fr);
	free(buf);
	close(fo);
	return (fw);
}
