#include "function_pointers.h"


/**
* print_name - prints a name using passed function pointer
* @name: string as a pointer to char
* @f: pointer to function
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
