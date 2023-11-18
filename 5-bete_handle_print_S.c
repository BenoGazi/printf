#include "main.h"
/**
 * print_S - prints a string
 * @args: argument list
 * Return: number of characters printed
 */
int print_S(va_list args)
{
	int i = 0;
	int count = 0;
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i]; i++)
	{
		if (str[i]  < 32 || str[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			_putchar((str[i] / 16) < 10 ? (str[i] / 16) + '0' : (str[i] / 16) - 10 + 'a');
			_putchar((str[i] % 16) < 10 ? (str[i] % 16) + '0' : (str[i] % 16) - 10 + 'a');
			count += 4;
		}
		else
		{
			_putchar(str[i]);
			count++;

		}
	}
	return (count);
}

/**
 * _printf - prints a formatted string
 * @str: format string
 * Return: number of characters printed
 */
int _printf(const char *str, ...)
{
	int i = 0;
	int count = 0;
	va_list args;

	va_start(args, str);
	for (i = 0; str && str[i]; i++)
	{
		if (str[i] == '%')
		{
			i++;
			while (str[i] == ' ')
				i++;

			if (!str[i])
				break;

			if (str[i] == 'S')
				count += print_S(args);
			else
			{
				_putchar('%');
				_putchar(str[i]);
				count += 2;
			}
		}
		else
		{
			_putchar(str[i]);
			count++;
		}
	}
	va_end(args);
	return (count);
}
