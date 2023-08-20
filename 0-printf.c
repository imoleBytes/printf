#include "main.h"
#include <stdio.h>
#include <stdarg.h>



int _printf(const char *format, ...)
{
	va_list args;
	int i = 0;	
	int count = 0;
	char *s;
	char sINT[20];
	int q = 0;
	int r;
	int temp;


	va_start(args, format);


	while (*(format + i) != '\0')
	{
		if (*(format + i) == '%')
		{
			switch (*(format + i + 1))
			{
				case 'c':
					_putchar(va_arg(args, int));
					i++;
					break;
				case 's':
					s = va_arg(args, char *);
					while (*s != '\0')
					{
						_putchar(*s);
						s++;
					}
					/*printf("%s", va_arg(args, char *));*/
					i++;
					break;
				case 'i':
				case 'd':
				// handle d!!!!!!!!!
					sprintf(sINT, "%d", va_arg(args, int));
				
					// write(1, &sINT, 4);
					// sINT = (char [])va_arg(args, int);

					while (sINT[q] != '\0')
					{
						_putchar(sINT[q]);
						q++;
					}

					/*printf("%i", va_arg(args, int));*/
					i++;
					break;
				case '%':
					_putchar(*(format + i + 1));
					i++;				
			}
			count++;
		}
		else
			_putchar(*(format + i));
		i++;
	}

	// printf("\n");

	va_end(args);

	return (count);
}



int main(void)
{
	// _printf("my name is %s, i'm %d years old. %c! and scored 90%%.", "mike", 12, 'K');
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
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
