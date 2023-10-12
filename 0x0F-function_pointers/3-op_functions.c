#include <stdio.h>
#include "3-calc.h"
/**
 * op_add - find sum if 2 intger
 * @a: intger as input
 * @b: intger an input
 * Return: an intger
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - find subtract of 2 intger
 * @a: intger as input
 * @b: intger an input
 * Return: an intger
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - find multiply of 2 intger
 * @a: intger as input
 * @b: intger an input
 * Return: an intger
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - find divisin of 2 intger
 * @a: intger as input
 * @b: intger an input
 * Return: an intger
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - find reminder of 2 intger
 * @a: intger as input
 * @b: intger an input
 * Return: an intger
 */
int op_mod(int a, int b)
{
	return (a % b);
}
