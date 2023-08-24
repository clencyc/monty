#include "monty.h"

/**
* error_output - The function that is going to be used to output the error
* @code_err: The code of the error that is going to be outputted
*/

void error_output(unsigned int code_err, ...)
{
va_list args;

char *error_mess;
unsigned int line_nu;

va_start(args, code_err);

switch (code_err)
{
case 1:
fprintf(stderr, "USAGE: monty file\n");
break;

case 2:
fprintf(stderr, "Error: Can't open file %s\n", va_arg(args, char *));
break;

case 3:
line_nu = va_arg(args, unsigned int);
error_mess = va_arg(args, char *);
fprintf(stderr, "L%d: unknown instruction %s\n", line_nu, error_mess);
break;

case 4:
fprintf(stderr, "Error: malloc failed\n");
break;

case 5:
fprintf(stderr, "L%d: usage: push integer\n", va_arg(args, unsigned int));
break;

default:
break;
}

nodes_free();
exit(EXIT_FAILURE);
}

/**
* more_errors - The function that is going to
* be used to output the other errors
* @code_err: The code of the error that is going to be outputted
*
*/
void more_errors(unsigned int code_err, ...)
{
va_list args;

char *error_mess;
unsigned int line_nu;

va_start(args, code_err);

switch (code_err)
{
case 6:
fprintf(stderr, "L%d: can't pint, stack empty\n", va_arg(args, unsigned int));
break;

case 7:
fprintf(stderr, "L%d: can't pop an empty stack\n", va_arg(args, unsigned int));
break;

case 8:
line_nu = va_arg(args, unsigned int);
error_mess = va_arg(args, char *);
fprintf(stderr, "L%d: can't swap, stack too short\n", line_nu, error_mess);
break;

case 9:
line_nu = va_arg(args, unsigned int);
error_mess = va_arg(args, char *);
fprintf(stderr, "L%d: can't add, stack too short\n", line_nu, error_mess);
break;

default:
break;
}

nodes_free();
exit(EXIT_FAILURE);
}
