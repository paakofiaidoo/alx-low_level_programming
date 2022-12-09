#include <stdio.h>

/**
 * main - Print the specified string to the standard error.
 *
 * Return: Always 1.
 */
int main(void)
{
char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
fprintf(stderr, str);
return (1);
}
