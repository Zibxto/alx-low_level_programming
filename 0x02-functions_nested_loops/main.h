#ifndef _MAIN_H
#define _MAIN_H

/**
 * _putchar - writes the character c to stdout
 * Return: On success 1.
 */
int _putchar(char c);

/**
 * print_alphabet - prints the alphabets in lowercase
 */
 
void print_alphabet(void);
/**
 * prints 10 times the alphabet in lower case
 */
void print_alphabet_x10(void);

/**
 * checks for lower case
 */
int _islower(int c);

/**
 * checks for alphabetic character
 */
int _isalpha(int c);

/**
  * checks for the sign of a number and prints it
  */
int print_sign(int n);

/**
  * computes the absolute value of an integer
 */
int _abs(int);

/**
  * prints the last digit of a number
 */
int print_last_digit(int);

/**
  * prints every minute of the day
 */
void jack_bauer(void);

/**
  * prints the 9 times table
  */
void times_table(void);

/**
  * adds two integers
  */
int add(int, int);

#endif
