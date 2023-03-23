#include "stdio.h"

/**
 * decription - function that prints if integer is positive or negative
 * @i: integer argument
 * Return: 0
 */
positive_or_negative(int i)
{
	if (i < 0)
	{
		printf("%d is negative\n", i);

	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);

	}
	else
	{
		printf("%d is positive\n", i);
	}

}
