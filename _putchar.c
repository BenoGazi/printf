#include <stdio.h>
#include <string.h>

/**
 * _putchar -  writes a charatcter to standard output
 * @c: character string
 * Return: 0
 */

int _putchar(char c)
{
	return(write(1, &c, 1))
}
