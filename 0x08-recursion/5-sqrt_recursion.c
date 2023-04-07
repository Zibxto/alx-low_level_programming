#include "main.h"

/**
 * get_root - find square root of a number
 * @n: n
 * @root: root to test
 * Return: natural square root, or -1 if not natural root
 */

int get_root(int n, int root)
{
	if (root * root > n)
	{
		return (-1);
	}
	else if (root * root == n)
	{
	return (root);
	}
	return (get_root(n, root + 1));
}



/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to check
 * Return: int value
 */
int _sqrt_recursion(int n)
{

	if (n < 0)
	{
		return (-1);
	}
	return (get_root(n, 0));


}
