#include "alx.h"
/**
 *
 * _islower -checks for lowercase character.
 *
 * Returns 1 if c is lowercase
 * Return: Always 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
