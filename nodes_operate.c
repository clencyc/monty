#include "monty.h"

/**
* swaper_in - The function that is going to be used to swap the nodes
* @stack: pointer to top node of stack
* @lline_n: The line number that is going to be used
*/

void swaper_in(stack_t **stack, unsigned int lline_n)
{

stack_t *temp1;

if (stack == NULL)
more_errors(8, lline_n, "swap");

temp1 = (*stack)->next;

(*stack)->next = temp1->next;

temp1->next = *stack;

(*stack)->prev = temp1;

temp1->prev = NULL;
*stack = temp1;

}

/**
* adder_in - The function that is going to be used to add the nodes
* @stack: pointer to top node of stack
* @lline_n: The line number that is going to be used
*/
void adder_in(stack_t **stack, unsigned int lline_n)
{
int adder;

if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
more_errors(8, lline_n, "add");

(*stack) = (*stack)->next;

adder = (*stack)->n + (*stack)->prev->n;

(*stack)->n = adder;

free((*stack)->prev);

(*stack)->prev = NULL;
}
