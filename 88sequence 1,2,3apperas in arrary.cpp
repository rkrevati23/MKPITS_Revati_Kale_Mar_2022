#include<stdio.h>
#include<conio.h>
int main()
{
	int i,a[6],t=0;
	printf("enter any five number\n");

	for(i=0;i<6;i++)
	{
		printf("enter number");
		scanf("%d",&a[i]);

	}
	int count =0;
	for(i=0;i<6;i++)
	{
	    if(a[i]==1 && a[i+1]==2 && a[i+2]==3 )
		{
			count=count+1;
		}
}
		printf("%d",count);
	}