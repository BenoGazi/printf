#include "main.h"

/**
 * handle_int_d_i - prints an integer value
 * @args: integer argument
 * Return: number of characters printed
 */

int handle_int_d_i(va_list args)
{
	int n = va_arg(args, int);
	unsigned int d, i;
	int int_count = 0;

	i = (n < 0) ? -n : n;
	d = (n < 0) ? -n : n;

	if (n < 0)
	{
		_putchar('-');
		int_count++;
	}
	do
	{
		_putchar((i % 10) + 0);
		int_count++;
	}
	while (i != 0);

	if (d / 10 != 0)
	{
		int_count += handle_int_i(args);
	}
	int_count++;
	return (int_count);
}
