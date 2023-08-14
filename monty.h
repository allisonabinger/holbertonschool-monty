#ifndef MONTY_H
#define MONTY_H

#define WHITESPACE " \n\t\r"

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>

/**
 * struct stack_s - dll for stack (or queue)
 * @n: integer
 * @prev: points to the previous element 
 * @next: points to the next element
 */

typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcodes
 * @opcode: the opcode
 * @f: opcode funcs
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/*Prototypes*/
int is_int(char *arg);
int isDigit(int c);
void push(stack_t **stack, unsigned int line_number);
void pall(stack_t **top, unsigned int line_number);
void pint(stack_t **top, unsigned int line_number);
void pop(stack_t **top, unsigned int line_number);
void swap(stack_t **top, unsigned int line_number);
void add(stack_t **top, unsigned int line_number);
void nop(stack_t **top, unsigned int line_number);
void (*execOpcode(char *s))(stack_t **, unsigned int);
char *checkLine(char *line, stack_t **top, unsigned int line_number);
void readFile(char *filename, stack_t **stack);
void freeStack(stack_t *head);

#endif
