#ifndef MONTY_H
#define MONTY_H

#define WHITESPACE " \n\t\r"

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <errno.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/*global variable *top*/
extern stack_t *top;

typedef void(*opcode_func)(stack_t **stack, unsigned int line_number);
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        opcode_func f;
} instruction_t;

/*func prototypes*/

/*main program*/
void process_line(char *line, unsigned int line_number);
void execute_opcode(stack_t **stack, char *opcode, unsigned int line_number);
/*opcode funcs*/
void push(stack_t **stack, int value, unsigned int line_number);
void pall(stack_t **stack, unsigned int line_number);
/*helper funcs*/
int is_int(char *str);
void free_stack(stack_t *stack);

#endif
