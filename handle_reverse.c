#include "main.h"

/**
* handle_r - handle r specifier
* @str: pointer to string
* Return: count (int)
*/

int handle_r(char *str)
{
	int ct = 0;

	_print_rev_recursion(str, &ct);
	return (ct);
}
