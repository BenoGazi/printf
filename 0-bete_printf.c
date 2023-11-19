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
	int j;

	unique_id ID[ID_COUNT] = {
		{"%c", handle_c}, {"%s", handle_s}, {"%d", handle_int_d_i},
		{"%%", handle_per_cent}, {"%i", handle_int_d_i},
		{"%u", handle_u}, {"%b", handle_b}, {"%o", handle_o},
		{"%x", handle_x_X}, {"%X", handle_x_X}, {"%p", handle_p}, {"%S", print_S},
		{"%S", print_S}
	};

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	va_start(args, format);
	while (format[i] != '\0')
	{
		j = 0;
		while (j < ID_COUNT)
		{
			if (ID[j].key[0] == format[i] && ID[j].key[1] == format[i + 1])
			{
				char_count += ID[j].id(args);
				i += 2;
				break;
			}
			j++;
		}
		if (j == ID_COUNT)
		{
			_putchar(format[i]);
			i++;
			char_count++;
		}
	}
	va_end(args);
	return (char_count);
}
