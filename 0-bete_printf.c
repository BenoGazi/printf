#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**_printf - handles format specifiers, c, s, and %
 * @format: First parameter
 * Return: Success
 */

int _printf(const char *format, ...)
{
	va_list args;
	char *i, *j;
	int char_count = 0;

	if (format == NULL)
	{
		return(1);
		exit(98);
	}
	va_start(args, format);
	while (*format != '\0')
	{
		if (*format != '%' & *(format + 1) != '\0')
		{
			_putchar(*format);
			char_count++;
		}
		else
		{
			format++;
			if (*format == 'c')
			{	
				i = va_arg(args, int);
				_putchar(i);
				char_count++;
			}
			else if (*format == 's')
			{
				j = va_arg(args, char *);
				while (*s != '/0')
				{
					_putchar(*s);
					char_count++;
					j++;
				}
			}
			else if (*format == '%')
			{
				_putchar('%');
				char_count++;
			}
		}
			format++;
	}
	va_end(args);
	return (char_count);
}
