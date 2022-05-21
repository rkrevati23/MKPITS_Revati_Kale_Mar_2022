#include<stdio.h>
#include<conio.h>
int main()
{
	int x;
	
	printf("enter year: ");
	scanf("%d",&x);
	if(x%4 == 0)
	{
		printf("\n%d year is leap year",x);
	}
	else
	{
		printf("\n%d year is not leap year",x);
	}
}