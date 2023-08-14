#include "monty.h"

stack_t *top = NULL;

/**
 * main - Entry point for Monty
 * @argc: number of CL arguments
 * @argv: array of strings of arguments
 * Return: always 0
*/
int main(int argc, char *argv[])
{
	FILE *file;
	char *line = NULL;
	size_t len = 0;
	ssize_t read;
	unsigned int line_number = 1;

	/*checks for correct # of args*/
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	/*open input file*/
	file = fopen(argv[1], "r");

	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	/*call func to process each line*/
	while((read = getline(&line, &len, file)) != -1)
	{
		process_line(line, line_number);
		line_number++;
	}
	/*cleanup*/
	free(line);
	free_stack(top);
	fclose(file);
	return (0);
}

/*array of functions*/
opcode_func opcodes[] = 
{
	{"push", push},
	{"pall", pall},
	/*will add more here*/
	{NULL, NULL}
};