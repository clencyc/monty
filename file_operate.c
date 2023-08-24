#include "monty.h"

/**
* file_opener - The function that is going to be used to open the file
* @f_name: The file name that is going to be used to open the file
*/

void file_opener(char *f_name)
{
int checker;

FILE *file_d;

if (f_name == NULL)
{
error_output(2, f_name);
return;
}


checker = access(f_name, R_OK);

if (checker == -1)
{
error_output(2, f_name);
return;
}


file_d = fopen(f_name, "r");

if (file_d == NULL)
{
error_output(2, f_name);
return;
}

file_reader(file_d);

fclose(file_d);
}
