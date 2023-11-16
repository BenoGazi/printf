#include "main.h"

/**
 * handle_b - conversion for binary specifier
 * @args: argument
 * Return: Success
 */

int handle_b(va_list args)
{
	unsigned int n;
	char buffer[BUFF_SIZE];
	int b_count = 0;

	n = va_arg(args, unsigned int);
	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	index = sizeof(buffer) - 1;

	while (n > 0)
	{
		buffer[index--] = (n % 2) + '\0';
		n /= 2;
		b_count++;
	}
	for (int i = index + 1; i < sizeof(buffer); i++)
	{
		_putchar(buffer[i]);
	}
	return (b_count);
}
