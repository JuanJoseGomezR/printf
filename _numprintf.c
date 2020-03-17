#include "holberton.h"
/**
  * _iprintf - prints int
  * @format: args
  * Return: int
  */
int _iprintf(va_list format)
{
	int num;

	num = _printfnum(format);

	return (num);
}
