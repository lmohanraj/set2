
#include <stdio.h>
int main()
{
    int i,first,last;
    printf("enter first number");
    scanf("%d", &first);
    printf("enter last number");
    scanf("%d", &last);
    printf(" odd numbers are \n");
    if(start%2==0)
    {
        start++;
    }
    for(i=first;i<=last;i+=2)
    {
        printf("%d\n", i);
    }
    return 0;
}
