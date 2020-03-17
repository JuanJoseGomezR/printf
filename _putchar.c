#include "holberton.h"
/**
 * _putchar - print character
 * @c: The character to print
 * Return: C
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
