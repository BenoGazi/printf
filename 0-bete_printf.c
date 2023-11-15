#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdarg.h>

/**
 * _printf - main function
 * @format: format string
 * Return: success
 */

int _printf(const char *format, ...)
{
	va_list args;
	int char_count = 0;
	unique_id ID[6] = {
		{"%c", handle_c}, {"%s", handle_s}, {"%d", handle_int_d_i}, {"%%", handle_per_cent}, {"%i", handle_int_d_i}, {"%u", handle_u}
	};

	if (format == NULL)
	{
		return (-1);
	}
	va_start(args, format);
	while (*format != '\0')
	{
		if (*format != '%' || *(format + 1) == '\0')
		{
			_putchar(*format);
			char_count++;
		}
		else
		{
			int i = 0;
			while (i < ID_COUNT)
			{
				if (ID[i].key[1] == format[1])
				{
					char_count += ID[i].id(args);
					break;
				}
				i++;
			}
			if (i == ID_COUNT)
			{
				_putchar(*format);
				char_count++;
			}
			format++;
		}
		format++;
	}
	va_end(args);
	return (char_count);
}
