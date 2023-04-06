#ifndef _MAIN_H
#define _MAIN_H

/**
  * _putchar - writes the character c to stdout
  * @c: param
  * Return: On success 1.
  */
int _putchar(char c);

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: string to print
 * Return: void
 */
void _puts_recursion(char *s);

/*
 * _print_rev_recursion - prints a string in reverse order
 * @s: string to print
 * Return: void
*/
void _print_rev_recursion(char *s);

/**
 * _strlen_recursion - prints the length of a string
 * @s: string to check
 * Return: int
 */
int _strlen_recursion(char *s);

/**
 * factorial - returns the factorial of a given number
 * @n: number to check
 * Return: int
 */
int factorial(int n);

#endif
