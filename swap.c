#include "monty.h"

/**
 * swap - swaps the top two elements of stack
 *
 * @top: top element
 * @line_number: current line #
 */
void swap(stack_t **top, unsigned int line_number)
{
	stack_t *temp;

	if (*top == NULL || (*top)->next == NULL)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	temp = *top;
	*top = (*top)->next;
	temp->next = (*top)->next;
	(*top)->next = temp;

}