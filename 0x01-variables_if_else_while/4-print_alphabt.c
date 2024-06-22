#include <stdio.h>

/* main - prints all the alphabet except q and e 
 * return: is always 0
 */
int main(void)
{
  char ch;
  for (ch = 'a'; ch <= 'z'; ch++)
    {
      if (ch != 'q' && ch != 'e')
	{
	  putchar(ch);
	}
    }
  putchar('\n');
  return(0);
}
