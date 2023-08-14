#include "monty.h"

/**
 * nop - useless
 *
 * @top: top node of stack
 * @line_number: current line #
 *
 */
void nop(stack_t **top, unsigned int line_number)
{
    /*WHY DO U EXIST LOL*/
	(void)top, (void)line_number;
}

void (*execOpcode(char *s))(stack_t **, unsigned int)
{
    return (NULL);
}
