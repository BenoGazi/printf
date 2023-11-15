#include "main.h"

/**
 * _printf - main function
 * @format: format string
 * Return: success
 */

int _printf(const char *format, ...)
{
	va_list args;
	int char_count = 0;
	int i = 0;

	unique_id ID[ID_COUNT] = {
		{"%c", handle_c}, {"%s", handle_s}, {"%d", handle_int_d_i},
		{"%%", handle_per_cent}, {"%i", handle_int_d_i},
		{"%u", handle_u}, {"%b", handle_b}
	};

	if (!format)
		return (-1);
	va_start(args, format);
	while (*format)
	{
		if (*format != '%' || *(format + 1) == '\0')
		{
			_putchar(*format);
			char_count++;
		}
		else
		{
			for (i = 0; i < ID_COUNT && ID[i].key[1] != format[1]; i++)
				;
			if (i < ID_COUNT)
			{
				char_count += ID[i].id(args);
				format += 2;
			}
			else
			{
				_putchar(*format++);
				continue;
			}
		}
		format++;
	}
	va_end(args);
	return (char_count);
}
