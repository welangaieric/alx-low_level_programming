#include "main.h"

/**
 * append_text_to_file - adds text to a file
 * @filename :name of file
 * @text_content : text to be added
 * Return : 1 for success and  -1 for fail
 */
int append_text_to_file(const char *filename, char *text_content);
{
	int file_d;
	int nlett;
	int rwr;

	if (!filename)
		return (-1);

	file_d = open(filename, 0_WRONLY |O_APPEND);
	if (file_d == NULL)
		return (-1);
	if (text_content)
	{
		for (nlett = 0; text_content[nlett]; nlet++)
			;
		rwr = write(file_d, text_content, nlett);
		if(rwr == -1)
			return (-1);
	}
	close(file_d);
}
