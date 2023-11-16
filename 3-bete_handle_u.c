#include "main.h"

/**
 * handle_u - handles u specifier
 * Return: Int
 * @args: argument count
 */

int handle_u(va_list args)
{
	int n;
	unsigned int i;
	int int_count;
	/**
	 * extract unsigned in argument
	 */

	n = va_arg(args, unsigned int);
	int_count = 0;

	if (n < 0)
	{
		i = -n;
		_putchar('-');
		int_count++;
	}
	else
	{
		i = n;
	}
	if (i == 0)
	{
		_putchar('0');
		return (1);
	}
	while (i != 0)
	{
		int_count++;
		_putchar(i % 10 + '0');
		i /= 10;
	}
	return (int_count);
}
