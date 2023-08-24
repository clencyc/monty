#include "monty.h"

/**
* paller_in - The function that is going to be used to
*            add a node to stack
* @stack: pointer to top node of stack
* @line_number: The line number that is going to be used
*/
void paller_in(stack_t **stack, unsigned int line_number)
{
stack_t *temp1;
(void)line_number;

if (stack == NULL)
exit(EXIT_FAILURE);

temp1 = *stack;

while (temp1->next != NULL)
{
fprintf(stdout, "%d\n", temp1->n);
temp1 = temp1->next;

}
}

/**
* poper_in - The function that is going to be used
* @stack: pointer to top node of stack
* @line_number: The line number that is going to be used
*/
void  poper_in(stack_t **stack, unsigned int line_number)
{
stack_t *temp1;

if (stack == NULL || *stack == NULL)
more_errors(7, line_number);

temp1 = *stack;
*stack = temp1->next;

if (*stack != NULL)
(*stack)->prev = NULL;

free(temp1);
}

/**
* pinter_in - The function that is going to be used
* @stack: pointer to top node of stack
* @line_number: The line number that is going to be used
*/
void pinter_in(stack_t **stack, unsigned int line_number)
{
if (stack == NULL)
{
more_errors(6, line_number);
return;
}

if (*stack == NULL)
{
more_errors(6, line_number);
return;
}

printf("%d\n", (*stack)->n);

}
