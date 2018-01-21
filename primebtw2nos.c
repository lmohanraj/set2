#include <stdio.h>
int main()
{
    int first,last,i,flag;
    printf("Enter first and last numbers ");
    scanf("%d %d", &first, &last);
    printf("Prime numbers are");
    while (first<last)
    {
        flag = 0;
        for(i = 2; i <= first/2; ++i)
        {
            if(first%i==0)
            {
                flag = 1;
                break;
            }
        }

        if (flag==0)
            printf("%d ",first);

        ++low;
    }

    return 0;
}
