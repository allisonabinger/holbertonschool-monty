#include "monty.h"

/**
 *get_monty_op - selects function to perform
 *
 *@s: operator passed as argument to program
 *
 *Return: operation or NULL
 */

void (*executeOpcode(char *s))(stack_t **stack, unsigned int line_number)
{
    int i = 0;
	instruction_t inst[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
		{NULL, NULL}
	};
	
	while (inst[i].opcode != NULL && strcmp(inst[i].opcode, s) != 0)
	{
		i++;
	}
	return (inst[i].f);
}
