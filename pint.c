#include "monty.h"
/**
 * pint - prints the top element of stack
 *
 * @top: top element of stack
 * @line_number: current line number
 */
void pint(stack_t **top, unsigned int line_number)
{
	stack_t *traverse;

	traverse = *top;
	if (traverse == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", traverse->n);
}