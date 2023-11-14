#include "main.c"

/**
 * handle_u - handles u specifier
 * Return: Int
 * @args: argument count
 */

int handle_u(va_list args)
{
	//extract unsigned in argument
	n = va_arg(args, unsigned int);
	unsigned int i;
	//character counter
	int int_count = 0;

	/**if negative, converts to positive for processing and 
	 *print '-' for negative numbers
	 */
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
	//loops through each digit of the element
	//print the digit and move to the next digit
	while (i != 0)
	{
		int_count++;
		_putchar(i % 10 + '0');
		i /= 10;
	}
	return(int_count);
}
