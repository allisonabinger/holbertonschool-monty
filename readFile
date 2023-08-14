#include "monty.h"

/**
 * readFile - reads monty file
 *
 * @filename: file
 * @stack: pointer to the top of the stack
 */

void readFile(char *filename, stack_t **stack)
{
	FILE *fp;
	size_t len = 50;
	int num_chars = 0;
	unsigned int line_count = 1;
	char *line;
	void (*f)(stack_t **stack, unsigned int line_number);

	fp = fopen(filename, "r");
	if (fp == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", filename);
		exit(EXIT_FAILURE);
	}
	line = malloc(sizeof(char) * 50);
	while ((num_chars = getline(&line, &len, fp)) != -1)
	{
		line = checkLine(line, stack, line_count);
		if (line == NULL)
		{
			line_count++;
			continue;
		}
		f = execOpcode(line);
		if (f == NULL)
		{
			fprintf(stderr, "L%d: unknown instruction %s\n", line_count, line);
			exit(EXIT_FAILURE);
		}
		f(stack, line_count);
		line_count++;
	}
	free(line);
	fclose(fp);
}