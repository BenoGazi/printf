#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
/**
 *struct UniqueID - struct type
 *@key: placeholder checker
 *@id: function checker
 */
typedef struct UniqueID
{
	char *key;
	int (*id)();
} unique_id;

#define ID_COUNT 10
#define BUFF_SIZE 1024

int _printf(const char *format, ...);
int handle_int_d_i(va_list args);
int handle_u(va_list args);
int _putchar(char c);
int handle_c(va_list args);
int handle_s(va_list args);
int handle_per_cent(void);
int handle_b(va_list args);
int handle_o(va_list args);
int handle_x_X(va_list args);
int _printf(const char *str, ...);
int print_S(va_list args);

#endif /* MAIN_H */
