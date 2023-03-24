#ifndef _MAIN_H
#define _MAIN_H

/**
 * _putchar - writes the character c to stdout
 * Return: On success 1.
 */
int _putchar(char c);


/**
 * _isupper - checks if a letter is uppercase or lowercase
 * @c: argument to check
 * Return: 1 if upper and 0 if otherwise
 */
int _isupper(int c);

/**
 * _isdigit - checks if an argument is a digit or not
 * @c: integer argument to check
 * Return: 1 if digit and 0 if otherwise
 */
int _isdigit(int c);

 /**
  * mul - multiplies 2 integer arguments
  * @a: integer argument
  * @b: integer argument
  * Return: result
  */
int mul(int a, int b);

/**
 * print_numbers - function to check
 * Description: prints numbers from 0 - 9
 */
void print_numbers(void);

/**
 * print_most_numbers - function to check
 * Description: prints 0 - 9 excluding 2 and 4
 */
void print_most_numbers(void);

/**
 * more_numbers - function to check
 * Description: prints 10 times the number 0 - 14
 */
void more_numbers(void);

/**
 * print_line - function to check
 * Description: draws a straight line
 */
void print_line(int n);

/**
 * print_diagonal - function to check
 * Description: draws a diagonal line
 */
void print_diagonal(int n);

/**
 * print_square - function to check
 * Description: prints a square
 */
void print_square(int size);

/**
 * print_triangle - function to check
 * Description: prints a triangle
 */
void print_triangle(int size);

/**
 * print_number - function to check
 * Description: prints an integer
 */

void print_number(int n);
#endif
