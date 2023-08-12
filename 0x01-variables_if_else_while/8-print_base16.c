#include <stdio.h>

/**
 * main - Entry point
 * 
 * Return: Always 0 (Success)
 */
int main(void)
{
  char letter = 97;
  char  num = 48;
  while (num < 58)
    {
      putchar(num);
      num++;
    }
  while (letter < 103)
    {
      putchar(letter);
      letter++;
    }
  putchar('\n');
  return (0);
}
