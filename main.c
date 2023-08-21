#include "main.h"
#include <stdio.h>


/**
* main - func
* Return: int
*/
int main(void)
{
	int ct;

	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	_printf("Positive:[%d]\n", 534);
	printf("Positive:[%d]\n", 534);
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");

	_printf("Unknown:[%r]\n");

	ct = _printf("Positive:[%d] and %c\n", 534, 'M');
	_printf("%i\n", ct);

	return (0);
}
