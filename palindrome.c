#include <stdio.h>
 
int main()
{
   int l, reverse = 0, t;
 
   printf("Enter a number\n");
   scanf("%d",&l);
   t=n;
   while( t!=0 )
   {
      reverse = reverse * 10;
      reverse = reverse + t%10;
      t=t/10;
   }
   if ( l==reverse )
      printf("yes\n");
   else
      printf("no");
   return 0;
}
