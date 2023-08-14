#include "monty.h"
/**
 * pall - prints all values on stack
 * @stack: pointer to the top of the stack
 * @line_number: line # being processed
 * Return: void
*/
void pall(stack_t **stack, unsigned int line_number)
{
    stack_t *current = *stack;

    while(current)
    {
        printf("%d\n", current->n);
        current = current->next;
    }
}