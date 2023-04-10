#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
  * main - Entry point
  * @argc: number of arguments passed to program
  * @argv: array of arguments passed to program
  * Return: Always 0
  */

int main(int argc, char *argv[])
{
	int i;

	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			sum += atoi(argv[i]);

			if (isdigit(*argv[i]) == 0)
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
		printf("%d\n", sum);

	}

	return (0);

}
