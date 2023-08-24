#include "monty.h"


/**
* divideer_in - Disvison place
* @stack: pointer to top node of stack
* @lline_n: The line number that is going to be used
*/
void  divideer_in(stack_t **stack, unsigned int lline_n)
{
int divider;

if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
more_errors(8, lline_n, "div");

(*stack) = (*stack)->next;

divider = (*stack)->n / (*stack)->prev->n;

(*stack)->n = divider;

free((*stack)->prev);

(*stack)->prev = NULL;
}
