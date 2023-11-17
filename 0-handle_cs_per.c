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
	int i = 0;
	int char_count = 0;

	pr_str = va_arg(args, char *);
	if (pr_str == NULL)
	{
		return (-1);
	}

	while (pr_str[i] != '\0')
	{
		_putchar(pr_str[i]);
		char_count++;
		i++;

		if (i == BUFF_SIZE - 1 || pr_str[i] == '\0')
		{
			i = 0;
		}
	}
	return (char_count);
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
