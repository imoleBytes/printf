#include "main.h"
#include <stdio.h>



int main(void)
{
	// _printf("my name is %s, i'm %d years old. %c! and scored 90%%.", "mike", 12, 'K');
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
	_printf("Positive:[%d]\n", 534);
    printf("Positive:[%d]\n", 534);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    // _printf("Address:[%p]\n", addr);
    // printf("Address:[%p]\n", addr);
    // _printf("Len:[%d]\n", len);
    // printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    // printf("Unknown:[%r]\n");
	/*/ printf("%d\n", numOfDirectives("%sa%%hd%c%i"));*/

	return (0);
}
