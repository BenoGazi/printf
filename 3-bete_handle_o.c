#include "main.h"

/**
 * handle_o - function that handles o specifier
 * @args: argument count
 * Return: int
 */

int handle_o(va_list args)
{
	unsigned int n = va_arg(unsigned int, args);
	unsigned i;
	int o_count = 0;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	while (n != 0)
	{
		o_count++;
		_putchar(n % 8 + '0');
		n /= 8;
	}
	return (o_count);
}
