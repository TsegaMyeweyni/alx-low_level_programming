#include "main.h"
#include <stdio.h>
/**
 *swap_int-swaps the values of two integers.
 *@a:integer a.
 *@b:integer b.
 *return: always 0.
 */
void swap_int(int *a, int *b)
{
  int temp;
    temp = *a;
  *a = *b;
  *b = temp;
  }
