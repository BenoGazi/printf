#include "main.h"

/**
 * handle_x_X - function that handles x and X specifiers
 * @args: argument count
 * @is_uppercase: indicates uppercase (1) or lowercase (0)
 * Return: number of characters printed
 */

int handle_x_X(va_list args, int is_uppercase)
{
	unsigned int n = va_arg(args, unsigned int);
	int x_X_count = 0;
	char buffer[BUFFER_SIZE];
	char *digits = is_uppercase ? "0123456789abcdef" : "0123456789ABCDEF";

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	int index = BUFFER_SIZE - 1;

	while (n != 0)
	{
		buffer[index--] = (digits[n % 16]);
		x_X_count++;
		n /= 16;
	}

	for (int i = index + 1; i < BUFFER_SIZE; i++)
	{
		_putchar(buffer[i]);
	}
	return (x_X_count);
}
