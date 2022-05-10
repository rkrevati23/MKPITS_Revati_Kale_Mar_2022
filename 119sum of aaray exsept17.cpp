#include<stdio.h>
#include<conio.h>
int main()
{
	int i,a[5],sum=0 ;
	printf("enter the array element\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		if(a[i]!=17)
		{
		sum=sum+a[i];	
		}
	}
	printf("sum of  array element except 17: %d",sum);
}