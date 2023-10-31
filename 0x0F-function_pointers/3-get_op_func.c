#include "3-calc.h"
/**
* get_op_func - select correct fn that mathches the operation selected by user
* @s: operator passed as arg
* Return: pointer to function that coressponds to user arg
*/

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	for (i = 0; *(ops[i].op) != '\0'; i++)
	{
		if (*s == *(ops[i].op))
			return (ops[i].f);
	}
	return (ops[i].f);
}
