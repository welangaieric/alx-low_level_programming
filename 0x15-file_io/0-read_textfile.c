#include "main.h"
/**
 *read_textfile - this reads a text file and prints it to the POSIx stdo
 *@filename : name of the file to be read
 *@letters : number of letters it should read and print
 *Return: actual number of letters it should read and print
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_d;
	ssize_t lenr, lenw;
	char *buffer;

	if (filename == NULL)
		return (0);
	file_d = open(filename,O_RDONLY);
	if (file_d == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(file_d)
		return (0);
	}
	lenr = read(file_d, buffer, letters);
	close(file_d);
	if (lenr == -1)
	{
		free(buffer);
	retunr (lenw);
}
