#ifndef __MONTY_H_
#define __MONTY_H_

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdarg.h>


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
void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

extern stack_t *header;

typedef void (*opti_func)(stack_t **, unsigned int);

void error_output(unsigned int code_err, ...);
void more_errors(unsigned int code_err, ...);
void nodes_free(void);
stack_t *the_node(int n);

void pusher_in(stack_t **, unsigned int);

void file_opener(char *);
void file_reader(FILE *);

void paller_in(stack_t **, unsigned int);

void looking_for_opcode(char *, char *, int, int);
int file_manage_r(char *, int, int);
void poper_in(stack_t **, unsigned int);
void queue_adding(stack_t **, unsigned int);
void pinter_in(stack_t **, unsigned int);

void fuc_calling(opti_func, char *, char *, int, int);

void suber_in(stack_t **stack, unsigned int lline_n);
void  divideer_in(stack_t **stack, unsigned int lline_n);

void swaper_in(stack_t **stack, unsigned int line_number);
void noper_in(stack_t **stack, unsigned int line_number);
void adder_in(stack_t **stack, unsigned int lline_n);

#endif /*The monty maker*/
