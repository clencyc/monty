#include "monty.h"

#define MAX_LINE_LENGTH 1024

/**
* file_reader - The function that is going to be used to read the file
* @file_d: The file descriptor that is going to be used to read the file
*/

void file_reader(FILE *file_d)
{
int fm = 0, ln;
char *linep = NULL, buffer[MAX_LINE_LENGTH];
size_t n = 0;

if (file_d == NULL)
error_output(2, "f_name");


for (ln = 1; fgets(buffer, sizeof(buffer), file_d) != NULL; ln++)
{
buffer[strcspn(buffer, "\n")] = '\0';
linep = buffer;
n = strlen(linep);
fm = file_manage_r(linep, ln, fm);
}


free(linep);
}

/**
* file_manage_r - The function that is going to be used to manage the file
*                 by reading the file line by line
* @str: The string that is going to be used to read the file
* @line_number: The line number that is going to be used to read the file
* @fm: Specifier
* Return: Always the fm  1 stack 0 queue
*/
int file_manage_r(char *str, int line_number, int fm)
{
const char *dli = "\n ";
char *opcode, *cm_d;

if (str == NULL)
error_output(4);

opcode = strtok(str, dli);

if (opcode == NULL)
return (fm);

cm_d = strtok(NULL, dli);

if (strcmp(opcode, "queue") == 0)

return (1);

else if (strcmp(opcode, "stack") == 0)

return (0);

looking_for_opcode(opcode, cm_d, line_number, fm);

return (fm);

}

/**
* looking_for_opcode - The function that is going to be execute
* @opcode: The opcode operation
* @cm_d: The value opt
* @line_nu: The line number that is going to be used to read the file
* @fm: Specifier
*/
void looking_for_opcode(char *opcode, char *cm_d, int line_nu, int fm)
{
int postion, e_rr;

instruction_t funct_way[] = {
{"push", pusher_in},
{"pall", paller_in},
{"pint", pinter_in},
{"pop", poper_in},
{"swap", swaper_in},
{"add", adder_in},
{"nop", noper_in},
{"sub", suber_in},
{"div", divideer_in},
{NULL, NULL}
};

if (opcode[0] == '#')
return;

do {
postion = 0;
e_rr = 1;

if (strcmp(opcode, funct_way[postion].opcode) == 0)
{
fuc_calling(funct_way[postion].f, opcode, cm_d, line_nu, fm);
e_rr = 0;
}

} while (funct_way[postion++].opcode != NULL);

if (e_rr == 1)
error_output(3, line_nu, opcode);

}

/**
* fuc_calling - The function that is going to be used to call the function
* @f: The function that is going to be used to call the function
* @cm_d: The value opt
* @op_i: The opcode operation
* @fm: Specifier
* @line_nu: The line number that is going to be used to read the file
*/

void fuc_calling(opti_func f, char *op_i, char *cm_d, int line_nu, int fm)
{
stack_t *new_node;

int i, e_rr = 1;

if (strcmp(op_i, "push") == 0)
{
if (cm_d != NULL && cm_d[0] == '-')
{
cm_d += 1;
e_rr = -1;
}

if (cm_d == NULL)
error_output(5, line_nu);

do {

i = 0;

if (isdigit(cm_d[i]) == 0)
error_output(5, line_nu);

new_node = the_node(atoi(cm_d) * e_rr);

if (fm == 0)
f(&new_node, line_nu);

if (fm == 1)
queue_adding(&new_node, line_nu);
} while (isdigit(cm_d[i]));




}

else
{
f(&header, line_nu);
}
}
