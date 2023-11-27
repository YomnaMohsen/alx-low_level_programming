#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"
/**
 * create_file - reads file and prints it on std output
 * @filename: string file name to be read
 * @text_content: null terminaed string to write in file
 * Return:  1 on success or -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fo, fw, len = 0;

	if (!filename)
		return (-1);
	if (text_content)
	{
		while (*text_content != '\0')
		{
			len++;
			text_content++;
		}
	}
	fo = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	fw = write(fo, text_content, len);
	if (fw == -1 || fo == -1)
		return (-1);
	close(fo);
	return (1);
}
