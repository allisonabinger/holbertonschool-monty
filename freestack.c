#include "monty.h"

/**
 * freestack - frees stack
 * @head: head node of list
 */
void freestack(stack_t *head)
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