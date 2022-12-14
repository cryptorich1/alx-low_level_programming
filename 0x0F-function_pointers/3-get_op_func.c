#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_op_func - Program that determines which operator to use
 * @s: Char that deremines what operator function to use
 * Return: Pointer to the appropriate operator function, or NULL if failed
 */
int (*get_op_func(char *s))(int, int)
{
	/* ops[6][2] */
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, Null}
	};
	int i;

	i = 0;
	while (ops[i].op)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
