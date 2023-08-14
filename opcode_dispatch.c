#include "monty.h"

/**
 *execOpcode - selects function based on opcode
 *
 *@s: operator arg
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
