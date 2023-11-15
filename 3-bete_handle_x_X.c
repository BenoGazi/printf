#include "main.h"

/**
 * handle_x_X - function that handles x and X specifiers
 * @args: argument count
 * @uppercase: indicates uppercase (1) or lowercase (0)
 * Return: number of characters printed
 */

int handle_x_X(va_list args, int uppercase)
{
	unsigned int n = va_arg(unsigned int, args);
	int x_X_count = 0;
	char *digits = "0123456789abcdef" : "0123456789ABCDEF"

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
