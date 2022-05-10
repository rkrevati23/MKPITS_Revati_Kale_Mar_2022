#include<stdio.h>
#include<conio.h>
int main()
{
	int i, a[8], sum=0;
	
	printf("enter the array element\n");
	
	for(i=0;i<8;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<8;i++)
	{
		if(a[i]!=5 && a[i+1]!=6)
		{
		sum = sum+a[i];
		}

	}
	printf("sum of  array those starting with 5 followed by 6: %d",sum-6);
}