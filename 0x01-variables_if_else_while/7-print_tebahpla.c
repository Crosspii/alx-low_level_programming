#include <stdio.h>
/* main - prints the alphatbets from z to a and a new line
 * return: is always 0
 */
int main(void);
{
  char ch;
  for (ch = 'z'; ch >= 'a'; ch--)
    {
      putchar(ch);
    }
  putchar('\n');
  return(0);
}
