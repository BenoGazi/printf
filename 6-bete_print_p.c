#include "main.h"
/**
 * print_p - prints pointer varriable
 * @args: argument list
 * Return: number of characters printed
 */
int handle_p(va_list args)
{
	int count;
	int print;
	int shift;
	void *home;
	unsigned long bt_home;
	(void)args;
	print = 0;
	count = 0;

	home = va_arg(args, void *);
	bt_home = (unsigned long)home;

	if (home == NULL)
		return (_putchar('(') + _putchar('n') + _putchar('i') + _putchar('l') + _putchar(')'));
	count += _putchar('0') + _putchar('x');
	for (shift = (sizeof(void *) * 8) - 4; shift >= 0; shift -= 4)
	{
		int digit = (bt_home >> shift) & 0xF;

		if (print || digit != 0)
		{
			_putchar("0123456789abcdef"[digit]);
			count++;
			print = 1;
		}
	}
	if (!print)
	{
		_putchar('0');
		count++;
	}
	return (count);
}
