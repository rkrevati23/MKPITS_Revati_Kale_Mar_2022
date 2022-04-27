#include<stdio.h>
main()
{
	int num=0;
	printf("enter any numbers\n");
	scanf("%d",&num);
	if(num>=0)
	{
		printf("\n numbers is possitive number");
	}
	else
	if(num<=0)
	{
		printf("\n numbers is negative number");	
	}
	else
	{
		printf(" enter 0");
	}
}