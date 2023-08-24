#include "monty.h"

/**
* queue_adding - The function that is going to be used to add the nodes
*
* @the_node: The node that is going to be used to add the nodes
* @line_number: The line number that is going to be used
*/
void queue_adding(stack_t **the_node, unsigned int line_number)
{
stack_t *temp1;
(void)line_number;

if (the_node == NULL || *the_node == NULL)
exit(EXIT_FAILURE);

if (header == NULL)
{
header = *the_node;
return;
}

temp1 = header;

while (temp1->next != NULL)
temp1 = temp1->next;

temp1->next = *the_node;
(*the_node)->prev = temp1;
}

/**
* pusher_in - The function that is going to be used to add the nodes
* @the_node: The node that is going to be used to add the nodes
* @line_number: The line number that is going to be used
*/

void pusher_in(stack_t **the_node, unsigned int line_number)
{
stack_t *temp1;
(void)line_number;

if (the_node == NULL || *the_node == NULL)
exit(EXIT_FAILURE);

if (header == NULL)
{
header = *the_node;
return;
}

temp1 = header;

temp1->prev = *the_node;
header = *the_node;
header->next = temp1;
temp1->prev = header;
}
