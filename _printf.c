#include "holberton.h"
/**
 * _printf - function of option struct
 * @format: parameter pointer
 * Return: option of struct
 */
int _printf(const char *format, ...)
{
	_format option[] = {
		{ "c", _cprintf},
		{ "s", _sprintf},
		{ "d", _dprintf},
		{ "%", _Prprintf},
		{ "i", _iprintf},
		{ "b", _bprintf},
		{ "r", _rprintf},
		{ "R", _Rprintf},
		{ "u", _uprintf},
		{ "o", _oprintf},
		{ "x", _xprintf},
		{ "X", _Xprintf},
	};
}
