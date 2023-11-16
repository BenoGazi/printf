#include "main.h"

/**
 * handle_o - function that handles o specifier
 * @args: argument count
 * Return: number of characters printed
 */

int handle_o(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	char buffer[BUFF_SIZE];
	int o_count = 0;
	unsigned int index;
	unsigned int t;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	index = sizeof(buffer) - 1;

	while (n != 0)
	{
		buffer[index--] = (n % 8 + '0');
		n /= 8;
		index--;
		o_count++;
	}
	for (t = index + 1; t < sizeof(buffer); t++)
	{
		_putchar(buffer[t]);
	}

	return (o_count);
}
