#include "monty.h"
/**
 * process_line - tokenizes opcode
 * @line: argument passed from user
 * @line_number: line number passed from user.
 */
void process_line(char *line, unsigned int line_number)
{
	char *opcode;
	char *arg;

	opcode = strtok(line, " \t\n");

	if (opcode)
	{
		arg = strtok(NULL, " \t\n");
		execute_opcode(opcode, arg, line_number);
	}
}
/*array of functions*/

typedef void (*opcode_func)(stack_t **, int);
struct
{
	const char *opcode;
	opcode_func func:
} opcodes[] = {
	{"push", push},
	{"pall", pall},
	{NULL, NULL}
};
/**
 * execute_opcode - handles opcode execution and argument validation
 * @opcode: opcode
 * @arg: argument
 * @line_number: line_number
 */
void execute_opcode(char *opcode, char *arg, unsigned int line_number)
{
	opcode_func func = NULL;
	int i;

	for (i = 0; opcodes[i].opcode; i++)
	{
		if (strcmp(opcode, opcodes[i].opcode) == 0)
		{
			func = opcode[i].func;
			break;
		}
	}

	if (!func)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", line_number, opcode);
		exit(EXIT_FAILURE);
	}
	func(&top, line_number);
}			
