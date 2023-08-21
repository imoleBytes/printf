#include <stdio.h>
#include "main.h"
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
					__putchar(va_arg(args, int));
					count++;
					i++;
					break;
				case 's':
					s = va_arg(args, char *);
					while (*s != '\0')
					{
						__putchar(*s);
						count++;
						s++;
					}
					/*printf("%s", va_arg(args, char *));*/
					i++;
					break;
				case 'i':
				case 'd':
				// handle d!!!!!!!!!
					intToStr(sINT, va_arg(args, int));

					while (sINT[q] != '\0')
					{
						__putchar(sINT[q]);
						count++;
						q++;
					}

					/*printf("%i", va_arg(args, int));*/
					i++;
					break;
				case '%':
					__putchar(*(format + i + 1));
					count++;
					i++;				
			}
			// count++;
		}
		else
		{
			__putchar(*(format + i));
			count++;
		}

		i++;
	}

	// printf("\n");

	va_end(args);

	return (count - 1);
}

