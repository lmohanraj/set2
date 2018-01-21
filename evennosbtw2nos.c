#include<stdio.h> 
int main()
{
 int first,last,rem,i;
           printf("enter th first number \n");
           scanf("%d",&first);
           printf("enter the last number \n");
           scanf("%d",&last);
           printf("the even numbers are");
           for(i=first;i<=last;i++)
           {
               rem = i % 2;
               if(rem == 0)
               printf("\n  %d",i);

           }

    return 0; 

    } 
