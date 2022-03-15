#include "main.h"
#include "main.c"

/**
 *main - Write a function that prints the alphabet, in lowercase
 *
 *Return: 0
 */
void print_alphabet(void)
{
char ch;
ch = 'a';
while (ch <= 'z')
{
_putchar(ch);
ch++;
}
_putchar('\n');
}

