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
	int i;

	pr_str = va_arg(args, char *);
	if (pr_str == NULL)
	{
		return (-1);
	}
	char buffer[BUFF_SIZE];
	int i = 0;

	while (pr_str[i] != '\0')
	{
		_putchar(pr_str[i]);
		i++;

		if (i == BUFF_SIZE - 1 || pr_str[i] == '\0')
		{
			buffer[i] = '\0';
			for (int b = 0; buffer[b] != '\0'; b++)
			{
				_putchar(buffer[b]);
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
