#include "monty.h"
/**
 * is_int - check if string represents an int
 * @str: string to check
 * Return: 1 if it is, 0 otherwise
*/
int is_int(char *str)
{
    if (!str || *str == '\0')
        return (0);

    if (*str == '-' || *str == '+') /*skip optional sign*/
        str++;

    while (*str)
    {
        if (!is_int(*str))
        {
            return (0); /*non-digit char found*/
        }
        str++;
    }
    return (1); /*all chars are digits*/
}

/**
 * free_stack - frees all nodes in stack
 * @stack: pointer to top of stack
 * Return: void
*/
void free_stack(stack_t *stack)
{
    while (stack)
    {
        stack_t *temp = stack;
        stack = stack->next;
        free(temp);
    }
}