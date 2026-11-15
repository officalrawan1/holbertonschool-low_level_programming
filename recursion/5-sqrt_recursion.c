
#include "main.h"

/**
 * find_sqrt - searches for the natural square root
 * @n: number
 * @root: possible square root
 * Return: natural square root or -1
 */
int find_sqrt(int n, int root)
{
	if (root * root == n)
		return (root);

	if (root * root > n)
		return (-1);

	return (find_sqrt(n, root + 1));
}

/**
 * _sqrt_recursion - returns the natural square root
 * @n: number
 * Return: square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (find_sqrt(n, 0));
}
