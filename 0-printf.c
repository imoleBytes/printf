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
					i++;
					break;
				case 's':
					s = va_arg(args, char *);
					while (*s != '\0')
					{
						__putchar(*s);
						s++;
					}
					/*printf("%s", va_arg(args, char *));*/
					i++;
					break;
				case 'i':
				case 'd':
				// handle d!!!!!!!!!
					intToStr(sINT, va_arg(args, int));
					// sprintf(sINT, "%d", va_arg(args, int));
				
					// write(1, &sINT, 4);
					// sINT = (char [])va_arg(args, int);

					while (sINT[q] != '\0')
					{
						__putchar(sINT[q]);
						q++;
					}

					/*printf("%i", va_arg(args, int));*/
					i++;
					break;
				case '%':
					__putchar(*(format + i + 1));
					i++;				
			}
			count++;
		}
		else
			__putchar(*(format + i));
		i++;
	}

	// printf("\n");

	va_end(args);

	return (count);
}

