#include "monty.h"
/**
 * main - entry point, interprets monty files
 *
 * @argc: argument count
 * @argv: argument string
 * Return: 0 (success)
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

	readFile(argv[1], &stack);

	freestack(stack);
	return (0);
}