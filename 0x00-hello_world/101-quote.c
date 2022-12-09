#include <stdio.h>
#include <unistd.h>

/**
 * main - Print the specified string to the standard error.
 *
 * Return: Always 1.
 */
int main(void)
{
  const char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
  write(STDERR_FILENO, str, sizeof(str));
  return (1);
}
