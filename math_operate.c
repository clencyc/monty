#include "monty.h"

/**
* suber_in - The function that is going to be used to substract the nodes
* @stack: pointer to top node of stack
* @lline_n: The line number that is going to be used
*/

void suber_in(stack_t **stack, unsigned int lline_n)
{
int subber;

if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
more_errors(8, lline_n, "sub");

(*stack) = (*stack)->next;

subber = (*stack)->n - (*stack)->prev->n;

(*stack)->n = subber;

free((*stack)->prev);

(*stack)->prev = NULL;
}
