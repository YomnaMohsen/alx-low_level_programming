#include <stdio.h>
#include "3-calc.h"

/**
*op_add - add 2 numbers
*@a: first number to add
*@b: second number to add
*Return: int result
*/

int op_add(int a, int b)
{
	return (a + b);
}


/**
*op_sub - sub 2 numbers
*@a: first number to sub
*@b: second number to sub
*Return: int result
*/

int op_sub(int a, int b)
{
	return (a - b);
}


/**
*op_mul - mul 2 numbers
*@a: first number to mul
*@b: second number to mul
*Return: int result
*/

int op_mul(int a, int b)
{
	return (a * b);
}


/**
*op_div - div 2 numbers
*@a: dividend
*@b: divisor
*Return: int result or exit in case of error
*/

int op_div(int a, int b)
{
	return (a / b);
}

/**
*op_mod - get modulo of 2 numbers
*@a: dividend
*@b: divisor
*Return: int result or exit in case of error
*/

int op_mod(int a, int b)
{
	return (a % b);
}
