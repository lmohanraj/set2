#include
int main()
{
    int power,number;
    int result=1;
    int i = 0;
    printf("Enter the number");
    scanf("%d",&number);
    printf("Power");
    scanf("%d",&power);
    for(i = 0;i<power;i++)
    {
        result=result*number;
    }
    printf("result=%d\n",result);
    return 0;
}
