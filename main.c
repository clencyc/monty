#include "monty.h"

stack_t *header = NULL;

/**
* main - The first entry of the program that is being run in the program
*       that has been made in the progress
* @ag_c: The command line numbers argumentative
* @ag_v: THe array for whch we have the arguments
*
* Return: Always the zero formart within the programs
*/

int main(int ag_c, char **ag_v)
{
if (ag_c < 2)
error_output(1);

else
{
if (ag_c > 2)
error_output(1);

else
{
file_opener(ag_v[1]);

nodes_free();

return (0);
}
}
}
