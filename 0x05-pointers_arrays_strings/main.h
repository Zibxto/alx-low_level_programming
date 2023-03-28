#ifndef _MAIN_H
#define _MAIN_H

/**
 * _putchar - writes the character c to stdout
 * Return: On success 1.
 */
int _putchar(char c);

/**
 * reset_to_98 - function to check
 * @n: pointer argument
 * Description: takes a pointer to an int as parameter.
 */
void reset_to_98(int *n);

/**
 * swap_int - Swaps the value of two integers
 * @a: int argument
 * @b: int argument
 */
void swap_int(int *a, int *b);

/**
 * _strlen - returns the length of a string
 * @s: parameter
 */
int _strlen(char *s);

/**
 * _puts - prints a string
 * @str - param
 * Return: void
 */
void _puts(char *str);
#endif
