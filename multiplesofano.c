# include <stdio.h>
int main() 
{ 
 int i, d,res ;   
 printf("\nEnter the number") ; 
 scanf("%d",&d) ; 
 printf("\nThe numbers are :\n\n") ; 
 for(i=1;i<=5 ; i++) 
  {
  res=d*i;
   printf("%d\t",res) ; 
}
return 0;
}
