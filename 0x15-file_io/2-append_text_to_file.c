#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"
/**
 * append_text_to_file - reads file and prints it on std output
 * @filename: string file name to be read
 * @text_content: null terminated string to write in file
 * Return:  1 on success or -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fo, fw, len = 0;

	if (!filename)
		return (-1);
	if (text_content)
	{
		while (text_content[len] != '\0')
		{
			len++;
		}
	}
	fo = open(filename, O_WRONLY | O_APPEND);
	fw = write(fo, text_content, len);
	if (fw == -1 || fo == -1)
		return (-1);
	close(fo);
	return (1);
}
