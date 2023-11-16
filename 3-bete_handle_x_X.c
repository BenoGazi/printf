#include "main.h"

/**
 * handle_x_X - function that handles x and X specifiers
 * @args: argument count
 * @is_uppercase: indicates uppercase (1) or lowercase (0)
 * @is_uppercase: indicates
 * uppercase (1) or lowercase (0)
 * Return: number of characters printed
 */

int handle_x_X(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	int x_X_count = 0;
	int index = BUFF_SIZE - 1;
	int i;
	char buffer[BUFF_SIZE];
	char digits[] = "0123456789abcdef0123456789ABCDEF";

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	while (n != 0)
	{
		buffer[index--] = digits[n % 16];
		x_X_count++;
		n /= 16;
	}

	for (i = index + 1; i < BUFF_SIZE; i++)
	{
		_putchar(buffer[i]);
	}
	return (x_X_count);
}
