#include "monty.h"
/**
 * isDigit - determines if character is a digit
 *
 * @c: char
 * Return: 0 if is digit and -1 if not 
 */
int isDigit(int c)
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
 * is_int - checks if token following push is an integer
 *
 * @arg: arg for push
 *
 * Return: 0 if integer and -1 if not
 */
int is_int(char *arg)
{
	size_t i = 0;

	if (arg == NULL || strlen(arg) == 0)
		return (-1);
	for (; i < strlen(arg); i++)
	{
		if (isDigit(arg[i]) == -1)
			return (-1);
	}
	return (0);
}