#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdio.h>

void _puts_recursion(char *s);
void _print_rev_recursion(char *s);
int _putchar(char c);
int factorial(int n);
int _pow_recursion(int x, int y);
int _sqrt_recursion(int n);
int helper_sqrt(int n, int i);
int is_prime_number(int n);
int checker(int n, int x);
int is_palindrome(char *s);
int is_second_palindrome(char *s, int x);
int len(char *s, int x);

#endif
