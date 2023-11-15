#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int handle_int_d_i(va_list args);
int handle_u(va_list args);
int _putchar(char c);

#endif /* MAIN_H */
