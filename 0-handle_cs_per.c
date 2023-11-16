#include "main.h"
#include <stdarg.h>

/**
 * handle_c - prints a character
 * @args: argument
 * Return: string
 */

int handle_c(va_list args)
{
	char pr_char;

	pr_char = va_arg(args, int);
	_putchar(pr_char);
	return (1);
}

/**
 * handle_s - prints a string
 * @args: arguments
 * Return: String
 */

int handle_s(va_list args)
{
	char *pr_str;
	char buffer[BUFF_SIZE];
	int i = 0;
	int b;

	pr_str = va_arg(args, char *);
	if (pr_str == NULL)
	{
		return (-1);
	}

	while (pr_str[i] != '\0')
	{
		_putchar(pr_str[i]);
		i++;

		if (i == BUFF_SIZE - 1 || pr_str[i] == '\0')
		{
			buffer[i] = '\0';
			b = 0;
			while (buffer[b] != '\0')
			{
				_putchar(buffer[b]);
				b++;
			}
			i = 0;
		}
	}
	return (i);
}

/**
 * handle_per_cent - handles the percent sign
 * Return: success
 */

int handle_per_cent(void)
{
	_putchar('%');
	return (1);
}
