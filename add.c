#include "monty.h"

/**
 * add - adds the top two elements of stack
 *
 * @top: top element 
 * @line_number: current line #
 *
 */
void add(stack_t **top, unsigned int line_number)
{
	int ultimate, penultimate;

	if (*top == NULL || (*top)->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	ultimate = (*top)->n;
	penultimate = (*top)->next->n;
	(*top)->next->n = ultimate + penultimate;
	pop(top, line_number);
}