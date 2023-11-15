#include "main.h"

/**
 * handle_b - conversion for binary specifier
 * @args: argument
 * Return: Success
 */

int handle_b(va_list args)
{
	unsigned int n, i;
	int b_count = 0;

	n = va_arg(args, unsigned int);
	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	i = n;
	while (i > 0)
	{
		i /= 2;
		b_count++;
	}
	while (b_count > 0)
	{
		b_count--;
		_putchar((n >> b_count) & 1 ? '1' : '0');
	}
	return (n == 0 ? 1 : b_count);
}
