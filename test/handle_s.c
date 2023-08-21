#include "main.h"



/**
* handle_str - handle %s specifier
* @str: pointer to string
* Return: int
*/

int handle_str(char *str)
{
	int ct = 0;

	while (*str != '\0')
	{
		__putchar(*str);
		ct++;
		str++;
	}
	return (ct);
}
