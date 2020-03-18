#ifndef _SAMPLE_HEADER_H_
#define _SAMPLE_HEADER_H_

#include <stdarg.h>
#include <stdio.h>

int _putchar(char c);
int _printf(const char *format, ...);
void printnumber(int *ptr, int n);
void printstring(int *ptr, va_list args);
void printUn(int *ptr, unsigned int n);
#endif

