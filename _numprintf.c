#include "holberton.h"
/**
  * _printfnum - prints int
  * @format: args
  * Return: int
  */
int _printfnum(va_list format)
{
	int num;

	num = _iprintf(format);

	return (num);
}
