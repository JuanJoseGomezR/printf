#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
int _write(char);
int _printf(const char *format, ...);
int _cprintf(va_list format);
int _sprintf(va_list format);
int _dprintf(va_list format);
int _%printf(va_list format);
int _iprintf(va_list format);
int _bprintf(va_list format);
int _rprintf(va_list format);
int _Rprintf(va_list format);
int _uprintf(va_list format);
int _oprintf(va_list format);
int _xprintf(va_list format);
int _Xprintf(va_list format);
typedef struct format
{
	char *op;
	int (*f)(va_list print);
}_format;
#endif
