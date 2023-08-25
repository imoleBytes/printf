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
	char sINT[NUMBER_OF_CHAR];

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
					intToStr(sINT, va_arg(args, int), 10, 0);
					count += handle_str(sINT);
					i++;
					break;
				case 'o':
					intToStr(sINT, va_arg(args, int), 8, 0);
					count += handle_str(sINT);
					i++;
					break;
				case 'b':
					intToStr(sINT, va_arg(args, int), 2, 0);
					count += handle_str(sINT);
					i++;
					break;
				case 'x':
					intToStr(sINT, va_arg(args, int), 16, 0);
					count += handle_str(sINT);
					i++;
					break;
				case 'X':
					intToStr(sINT, va_arg(args, int), 16, 1);
					count += handle_str(sINT);
					i++;
					break;
				case 'r':
					count += handle_r(va_arg(args, char *));
					i++;
					break;
				case 'R':
					count += handle_R(va_arg(args, char *));
					i++;
					break;
				case '%':
					count += handle_percent_sign(*(format + i + 1));
					i++;
					break;
				default:
					__putchar(*(format + i));
					count++;
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
	return (count);
}
