#include "main.h"

/**
 * put_recursion - prints a string, followed by a new line.
 * @s: input
 *
 * Return: Always return 0
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
