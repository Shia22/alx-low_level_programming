#include <stdio.h>
/** * main - program that prints _putchar
*
* Return : 0 on success
*/
int main(void)
{
  char c[] = "_putchar";
  int i=0;
  while (i < sizeof(c))
    {
     putchar(c[i]);
      i++;
    }
  putchar('\n');

  return (0);
}
