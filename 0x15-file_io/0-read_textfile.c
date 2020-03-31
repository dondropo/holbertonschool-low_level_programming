#include "holberton.h"
/**
 *read_textfile - reads a text file and prints to the stdout
 *@filename: pointer to check the name
 *@letters: chars of the file
 *
 *Return: returns writer
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer = NULL;
	ssize_t reader;
	ssize_t writer;
	int i;

	if (filename && letters)
		i = open(filename, O_RDONLY);

	if (i != -1)
		buffer = malloc(sizeof(char) * letters);

	if (buffer)
	{
		reader = read(i, buffer, letters);
		close(i);
	}
	if (reader < 0)
	{
		free(buffer);
		return (0);
	}
	if (!reader)
		reader = letters;

	writer = write(STDOUT_FILENO, buffer, reader);
	free(buffer);

	if (writer < 0)
		return (0);

	return (writer);

}
