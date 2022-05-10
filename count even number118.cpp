#include<stdio.h>
#include<conio.h>
int main()
{
	int i, a[6],count=0;
	printf("enter the array element\n");
	for(i=0;i<6;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<6;i++)
	{
	if(a[i]%2==0)
	{	
	count=count+1;
	}	
	}	printf("count even number: %d",count);
}