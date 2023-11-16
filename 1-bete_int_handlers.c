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
	char buffer[BUFF_SIZE];
	int int_count = 0;

	i = (n < 0) ? -n : n;
	d = i;

	if (n < 0)
	{
		_putchar('-');
		int_count++;
	}
	index = sizeof(buffer) - 1;

	while (d != 0)
	{
		buffer[index--] = (d % 10) + '0';
		d /= 10;
		int_count++;
	}
	for (int t = index + 1; t < sizeof(buffer); t++)
	{
		_putchar(buffer[t]);
	}
	return (int_count);
}
