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
	char b, *t;
	int char_count = 0;

	if (format == NULL)
	{
		return (-1);
	}

	va_start(args, format);
	while (*format != '\0')
	{
		/**
		 * check for format specifier or end of format string
		 */
		if (*format != '%' && *(format + 1) != '\0')
		{
			/**
			 * if its a regular character and not a format specifier...
			 */
			_putchar(*format);
			char_count++;
		}
		else
		{
			/**
			 * move to the next character afer the '%' sign.
			 */
			format++;
			if (*format == 'c')
			{	
				b = va_arg(args, int);
				_putchar(b);
				char_count++;
			}
			else if (*format == 's')
			{
				t = va_arg(args, char *);
				while (*t != '\0')
				{
					_putchar(*t);
					char_count++;
					t++;
				}
			}
			else if (*format == '%')
			{
				/**
				 * print a '%' sign
				 */
				_putchar('%');
				char_count++;
			}
		}
		/**
		 * Move to the next character
		 */
			format++;
	}
	/**
	 * end the variadic arguments and return the results
	 */
	va_end(args);
	return (char_count);
}
