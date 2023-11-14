#include "main.h"

/**
 * handle int_i - prints an integer value
 * @i: integer param
 * Return: int
 */

int int_i(va_list args)
{
	int n = va_arg(args, int);
	int unsigned int i;
	int int_count = 0;

	i = (n < 0) ? -n : n;
	if (n < 0)
	{
		_putchar('-');
		int_count++;
	}
	if (n / 10 != 0)
	{
		int_count += int_i(args);
	}
	_putchar((i % 10) + '0');
	int_count++;
	return (int_count);
}
