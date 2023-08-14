#include "monty.h"
/**
 * _isdigit - finds if a character is a digit
 *
 * @c: char
 * Return: 0 if is digit and -1 if not digit
 */
int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
	{
		return (0);
	}
	else
	{
		return (-1);
	}
}
/**
 * is_integer - checks if token following push is an integer
 *
 * @arg: argument for push command
 *
 * Return: 0 if integer and -1 if not integer
 */
int is_integer(char *arg)
{
	size_t i = 0;

	if (arg == NULL || strlen(arg) == 0)
		return (-1);
	for (; i < strlen(arg); i++)
	{
		if (_isdigit(arg[i]) == -1)
			return (-1);
	}
	return (0);
}