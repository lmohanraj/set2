#include <stdio.h>
int main()
{
    int n, actualNumber, remr, res=0;
    printf("Enter a three digit integer: ");
    scanf("%d", &n);
    actualNumber = n;
    while (actualNumber != 0)
    {
        remainder = actualNumber%10;
        res+= rem*rem*rem;
        actualNumber /= 10;
    }
    if(res==n)
        printf("yes");
    else
        printf("no");
    return 0;
}
