#include "main.h"

/**
 * helperfunction - checks if sqrt of number exists
 * @num: number
 * @psqrt: sqrt of number
 * Return: -1
 */

int helperfunction(int num, int psqrt)
{
	if ((psqrt * psqrt) == num)
	{
		return (-1);

	}
	else
	{
		if ((psqrt * psqrt) > num)
			return (-1);
		else
			return (helperfunction(num, psqrt + 1));
	}

}

/**
 * _sqrt_recursion - returns the value of square root of a number
 * @n: number
 * Return: -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (helperfunction(n, 0));
}
