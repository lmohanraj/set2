#include<stdio.h>
int main()
{
	int num,l,count=0;
	printf("Enter a number");
	scanf("%d",&num);
	for(l=2;l<num;l++)
	{
		if(num%l==0)
		{
			count++;
			break;
		}
	}
	if(count==0)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
}
