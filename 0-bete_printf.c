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
		{"%%", handle_per_cent}, {"%i", handle_int_d_i}, {"%u", handle_u}, {"%b", handle_b}
	};

	if (format == NULL)
		return (-1);
	va_start(args, format);
	while (*format != '\0')
	{
		if (*format != '%' || *(format + 1) == '\0')
		{
			_putchar(*format);
			char_count++;
			format++;
		}
		else
		{
			i = 0;
			while (i < ID_COUNT && ID[i].key[1] == format[1])
			{
				i++;
				char_count += (i == ID_COUNT) ?
				(_putchar(*format++), 1) : ID[i].id(args);
			}
			format++;
		}
	}
	va_end(args);
	return (char_count);
}
