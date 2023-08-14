#include "monty.h"
/**
 * main - interprets monty files
 *
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success and 1 on failure
 */
int main(int argc, char **argv)
{
	stack_t *stack;

	stack = NULL;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	readLine(argv[1], &stack);
	freeStack(stack);
	return (0);
}