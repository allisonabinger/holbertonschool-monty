#include "monty.h"
/**
 * push - pushes an element to top of stack
 * @stack: pointer to the top of the stack
 * @value: value to push to top of stack
 * @line_number: line # being processes
 * Return: void
*/
void push(stack_t **stack, int value, unsigned int line_number)
{
    int arg = value;

    if(!is_int(arg))
    {
        fprintf(stderr, "L%d: USAGE: push integer\n", line_number);
        exit(EXIT_FAILURE);
    }

    stack_t *newnode = malloc(sizeof(stack_t));

    if(!newnode)
    {
        fprintf(stderr, "Error: malloc failed\n");
        exit(EXIT_FAILURE);
    }

    newnode->n = value;
    newnode->next = *stack;
    *stack = newnode;
}