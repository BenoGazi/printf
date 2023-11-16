#include "main.h"

/**
 * handle_o - function that handles o specifier
 * @args: argument count
 * Return: number of characters printed
 */

int handle_o(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	char buffer[BUFFER_SIZE];
	int o_count = 0;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	int index = sizeof(buffer) - 1;

	while (n != 0)
	{
	buffer[index--] = (n % 8 + '0');
		n /= 8;
		o_count++;
	}
	write(1, &buffer[index + 1], sizeof(buffer) - index - 1);

	return (o_count);
}
