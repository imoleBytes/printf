#include "main.h"
#include <stdio.h>


/**
* handle_R - handle %s specifier
* @str: pointer to string
* Return: int
*/

int handle_R(char *s)
{
	int ct = 0;
	char *p;

	p = s;

	// p = rot13(s);

	printf("%s\n", rot13(p));

	// while (*(p + ct) != '\0')
	// {
	// 	// __putchar(*p);
	// 	ct++;
	// 	p++;
	// }
	return (0);
}

int main(void)
{
	printf("%i\n", handle_R("michael"));
	return (0);
}
