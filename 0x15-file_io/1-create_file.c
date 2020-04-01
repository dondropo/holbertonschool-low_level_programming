#include "holberton.h"
/**
 *create_file - function that creates a file
 *@filename: name of the file to be created
 *@text_content: text content of the new file
 *
 *Return: returns 1 (success) or -1 (fail)
 */
int create_file(const char *filename, char *text_content)
{
	int file_d;
	int txt_len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	while (*(text_content + txt_len))
	{
		txt_len++;
	}
	file_d = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file_d == -1)
		return (-1);

	write(file_d, text_content, txt_len);
	close(file_d);

	return (1);

}
