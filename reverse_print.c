#include "main.h"

/**
* _print_rev_recursion - function to print a string in reverse
* @s: a pointer to the string
* @ctt: a pointer to count
*/
void _print_rev_recursion(char *s, int *ctt)
{

	if (s[0] != '\0')
	{
		_print_rev_recursion(&s[1], ctt);
		__putchar(s[0]);
		(*ctt)++;
		return;
	}
}
