#include "main.h"
#include <unistd.h>

/**
 * _putchar - write the character c to stdout
 * @c: The character to print
 *
 * Return: on succes, error -1, and errno is set appropriately
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
