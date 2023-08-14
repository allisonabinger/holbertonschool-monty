#include "monty.h"

/**
 * freeStack - frees stack
 *
 * @head: head node of list
 */
void freeStack(stack_t *head)
{
	stack_t *current;
	stack_t *tmp;

	current = head;

	while (current != NULL)
	{
		tmp = current->next;
		free(current);
		current = tmp;

	}
}