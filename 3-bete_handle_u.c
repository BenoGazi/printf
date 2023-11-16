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
	char buffer[BUFF_SIZE];
	int int_count;
	unsigned int index;
	unsigned int b;
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
	index = sizeof(buffer) - 1;

	while (i != 0)
	{
		buffer[index--] = (i % 10 + '0');
		i /= 10;
		index--;
		int_count++;
	}

	for (b = index + 1; b < sizeof(buffer); b++)
	{
		_putchar(buffer[b]);
	}
	return (int_count);
}
