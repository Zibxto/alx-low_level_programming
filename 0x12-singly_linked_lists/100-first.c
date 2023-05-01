#include <stdio.h>

/**
 * execute_before_main - prints a text before the main function is called
 * Return: void
 */

void __attribute__ ((constructor)) execute_before_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
