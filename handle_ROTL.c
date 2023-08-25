#include "main.h"


/**
* handle_R - handle %s specifier
* @str: pointer to string
* Return: int
*/

int handle_R(char *s)
{
	int ct = 0;
	char *p;

	p = rot13(s);

	while (*p != '\0')
	{
		__putchar(*p);
		ct++;
		p++;
	}
	return (ct);
}
