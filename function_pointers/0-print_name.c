#include "function_pointers.h"
/**
 *print_name- Prints name
 *@name: The name to rpint
 *@f: Pointer to function
 *Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
