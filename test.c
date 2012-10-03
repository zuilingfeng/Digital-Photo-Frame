#include<stdio.h>

int
main ()
{
  int i = 5;

  while (i > 0)
    {
      fprintf (stdout, "Hello world!\n");
      i--;
    }
  return 0;
}
