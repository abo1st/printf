#include "main.h"

/**
 * print_percent - function that Prints a percent sign
 * @types: arguments
 * @buffer: Buffer
 * @flags:  Calculates active flags
 * @width: width
 * @precision: Precision specification
 * @size: Size
 * Return: Number of chars
 */
int print_percent(va_list types, char buffer[],
	int flags, int width, int precision, int size)
{
	UNUSED(types);
	UNUSED(buffer);
	UNUSED(flags);
	UNUSED(width);
	UNUSED(precision);
	UNUSED(size);
	return (write(1, "%%", 1));
}
