#include "holberton.h"
/**
 *append_text_to_file - function that appends text at the end of a file
 *@filename: name of the file to be created
 *@text_content: text content of the new file
 *
 *Return: returns 1 (success) or -1 (fail)
 */
int append_text_to_file(const char *filename, char *text_content)
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
	file_d = open(filename, O_WRONLY | O_APPEND);

	if (file_d == -1)
		return (-1);

	write(file_d, text_content, txt_len);
	close(file_d);

	return (1);

}
