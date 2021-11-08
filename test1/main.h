#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * struct types - struct for types
 *
 * @fi: format identifier
 * @func: pointer to function associated with identifier
 */

typedef struct types
{
	char fi;
	char *(*func)(va_list arguments);
}types;
	
int _printf(const char *format, ...);
int _putchar(char c);
int _strlen(char *s);
char *_strcpy(char *dest, const char *src);
char *print_c(va_list arguments);
char *print_s(va_list arguments);
char *_strcat(char *dest ,char *src);
char* (*get_func(char s))(va_list);

#endif