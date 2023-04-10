#include <stdio.h>
#include <stdlib.h>


/**
 * main - Entry point
 * @argc: number of arguments passed to program
 * @argv: array of arguments passed to program
 * Return: Always 0
 */

int main(int argc, char *argv[])
{

	int i;

	int mul = 1;

	if (argc == 1)
	{
		printf("%s\n", "Error");
		return (1);
	}

	else
	{


	for (i = 1; i < argc; i++)
	{

		mul *= atoi(argv[i]);
	}

		printf("%d\n", mul);
	}
	return (0);





}
