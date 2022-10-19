#include "main.h"
/**
 * _printf - prints and input into the standard output
 * @format: the format string
 * Return: number of bytes printed
 */
int _printf(const char *format, ...)
{
	int p_chars;

	_cvrt f_list[] = {
		{"c", p_char},
		{"s", p_str},
		{"%", p_percent},
		{"d", p_int},
		{"i", p_int},
		{"r", p_str_rev},
		{"R", rot13},
		{"b", p_binary},
		{"u", unsigned_int},
		{"o", p_octal},
		{"x", p_hex},
		{"X", p_heX},

		{NULL, NULL}
	};
	va_list arg_list;

	if (format == NULL)
		return (-1);
	va_start(arg_list, format);
	p_chars = parser(format, f_list, arg_list);
	va_end(arg_list);
	return (p_chars);
}
