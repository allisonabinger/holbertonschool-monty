#include "monty.h"

/*array of functions*/
/* opcode_func array */
instruction_t opcodes[] = {
	{"push", push},
	{"pall", pall},
	{NULL, NULL}
};

/**
 * process_line - parse line and calls execute_opcode
 * @line: argument passed from user
 * @line_number: line number passed from user.
 */
void process_line(char *line, unsigned int line_number)
{
	char *opcode;
	char *arg;

	/*parsing to get opcode and argument*/
	opcode = strtok(line, WHITESPACE);

	if (opcode)
	{
		arg = strtok(NULL, WHITESPACE);
		execute_opcode(&top, opcode, line_number);
	}
}

/**
 * execute_opcode - Executes the opcode function based on the given opcode
 * @stack: Double pointer to the top of the stack
 * @opcode: The opcode to be executed
 * @line_number: The current line number in the Monty file
 *
 * Return: void
 */
void execute_opcode(stack_t **stack, char *opcode, unsigned int line_number)
{
    /* Iterate through the opcode_func array */
    int i = 0;

    while (opcodes[i].opcode != NULL)
    {
        /* Compare the opcode with the current element in the array */
        if (strcmp(opcode, opcodes[i].opcode) == 0)
        {
            /* Call the corresponding function */
            opcodes[i].f(stack, line_number);
            return;
        }
        i++;
    }

    /* If opcode is not found, print an error message */
    fprintf(stderr, "L%u: unknown instruction %s\n", line_number, opcode);
    exit(EXIT_FAILURE);
}
