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
    stack_t *newnode = malloc(sizeof(stack_t));
    char *arg_value;

    if (!newnode)
    {
        fprintf(stderr, "Error: malloc failed\n");
        exit(EXIT_FAILURE);
    }

    arg_value = strtok(NULL, WHITESPACE);
    if (!arg_value || !is_int(arg_value))
    {
        fprintf(stderr, "L%d: USAGE: push integer\n", line_number);
        free(newnode);
        exit(EXIT_FAILURE);
    }

    newnode->n = atoi(arg_value);
    newnode->next = *stack;
    newnode->prev = NULL;
    
    if (*stack)
        (*stack)->prev = newnode;
    
    *stack = newnode;
}