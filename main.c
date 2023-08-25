#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len, ct, cta;
	int len2;
	unsigned int ui;
	void *addr;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	ui = (unsigned int)INT_MAX + 1024;
	addr = (void *)0x7ffe637541f0;
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	_printf("Unsigned:[%u]\n", ui);
	printf("Unsigned:[%u]\n", ui);
	_printf("Unsigned octal:[%o]\n", ui);
	printf("Unsigned octal:[%o]\n", ui);
	_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	_printf("Address:[%p]\n", addr);
	printf("Address:[%p]\n", addr);
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	_printf("Unknown:[%r]\n", "hello");
	printf("Unknown:[%r]\n", "hello");

	ct = _printf("Positive:[%d] and %c\n", 534, 'M');
	cta = printf("Positive:[%d] and %c\n", 534, 'M');
	_printf("%i\n", ct);
	printf("%i\n", cta);

	_printf("%b\n", 98);
	printf("%b\n", 98);

	_printf("%x\n", 108);
	printf("%x\n", 108);

	_printf("%X\n", 10768578);
	printf("%X\n", 10768578);

	_printf("Unsigned octal:[%o]\n", 1085);
	printf("Unsigned octal:[%o]\n", 1085);

	_printf("%r\n", "michael");
	printf("%r\n", "hello");

	_printf("%R\n", "michael");
	printf("%R\n", "hello");
	return (0);
}
