#include <stdio.h>
int main()
{
  int i,l,fact = 1;
  printf("Enter a number\n");
  scanf("%d", &l);
  for (i = 1; i <= l; i++)
    fact=fact*i;
  printf("result=%d",fact);
  return 0;
  }
