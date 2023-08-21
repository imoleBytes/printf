#include <stdio.h>
#include "main.h"
#include <stdarg.h>

/**
* _printf - printf func
* @format: firsy sring
* Return: int
*/

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0;
	int count = 0;
	char sINT[20];

	va_start(args, format);
	while (*(format + i) != '\0')
	{
		if (*(format + i) == '%')
		{
			switch (*(format + i + 1))
			{
				case 'c':
					count += handle_percent_sign(va_arg(args, int));
					i++;
					break;
				case 's':
					count += handle_str(va_arg(args, char *));
					i++;
					break;
				case 'i':
				case 'd':
					intToStr(sINT, va_arg(args, int));
					count += handle_str(sINT);
					i++;
					break;
				case '%':
					count += handle_percent_sign(*(format + i + 1));
					i++;
			}
		}
		else
		{
			__putchar(*(format + i));
			count++;
		}
		i++;
	}
	va_end(args);
	return (count - 1);
}
