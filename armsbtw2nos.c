#include <stdio.h>
#include <math.h>
int main()
{
    int first,last, i, temp1, temp2, rem, n = 0, res = 0;

    printf("Enter two numbers ");
    scanf("%d %d", &first,&last);
    printf("Armstrong numbers are");

    for(i =first + 1; i < last; ++i)
    {
        temp2 = i;
        temp1 = i;
        while (temp1 != 0)
        {
            temp1 /= 10;
            ++n;
        }
        while (temp2 != 0)
        {
            rem = temp2 % 10;
            res += pow(rem, n);
            temp2 /= 10;
        }

        if (res == i) {
            printf("%d ", i);
        }
        n = 0;
        res = 0;

    }
    return 0;
}
