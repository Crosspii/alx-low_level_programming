#include <stdio.h>
/* main - prints the whole alphabet and a new line
 * return - always 0
 */

int main(void)
{
  char ch;
  for (ch = 'a'; ch <= 'z'; ch++)
    {
      putchar(ch);
    }
  putchar('\n');
  return(0);
}
