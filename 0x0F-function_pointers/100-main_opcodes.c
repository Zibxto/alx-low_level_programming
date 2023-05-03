#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcode of its main function
 * @argc: argument count.
 * @argv: argument vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	char *opcode = (char *) main;
	int count, nbytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	nbytes = atoi(argv[1]);

	if (nbytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (count = 0; count < nbytes; count++)
	{
		printf("%02x", opcode[count] & 0xFF);
		if (count != nbytes - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}
