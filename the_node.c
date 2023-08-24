#include "monty.h"

/**
* the_node - The function that is going to be used to create the node
* @n: The new data that is going to be used to create the node
*
*
* Return: Always the new node that has been created Successfully
*           with the pointer, or NULL if it failed
*/

stack_t *the_node(int n)
{
stack_t *new_node;

new_node = malloc(sizeof(stack_t));

if (new_node == NULL)
error_output(4);

new_node->next = NULL;
new_node->prev = NULL;
new_node->n = n;

return (new_node);
}

/**
* nodes_free - The function that is going to be used to free the nodes
*
*/

void nodes_free(void)
{
stack_t *temp1;

if (header == NULL)
return;

while (header != NULL)
{
temp1 = header;

if (header->next == NULL)
{
free(header);
return;
}

header = header->next;
free(temp1);
}
}
