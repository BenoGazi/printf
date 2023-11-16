#include "main.h"

/**
 * handle_x_X - function that handles x and X specifiers
 * @args: argument count
 * @uppercase: indicates uppercase (1) or lowercase (0)
 * Return: number of characters printed
 */

int handle_x_X(va_list args, int is_uppercase)
{
	unsigned int n = va_arg(args, unsigned int);
	int x_X_count = 0;
	char *digits = is_uppercase ? "0123456789abcdef" : "0123456789ABCDEF";

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	while (n != 0)
	{
		_putchar(digits[n % 16]);
		x_X_count++;
		n /= 16;
	}
	return (x_X_count);
}
