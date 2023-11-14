#include "main.h"

/**
 * handle int_b - prints an integer value
 * @b: integer param
 * Return: int
 */

int int_b(va_list args)
{
	int n = va_arg(args, int);
	int unsigned int b;
	int int_count = 0;

	b = (n < 0) ? -n : n;
	if (n < 0)
	{
		_putchar('-');
		int_count++;
	}
	if (n / 10 != 0)
	{
		int_count += int_b(args);
	}
	_putchar((b % 10) + '0');
	int_count++;
	return (int_count);
}
