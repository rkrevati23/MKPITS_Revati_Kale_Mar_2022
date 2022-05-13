#include<stdio.h>
#include<conio.h>
int main()
{
	int i,a[7],n;
	printf("enter the any number\n");
	
	for(i=0;i<7;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0; i<7; i++)
	{
		if(a[i]==3 && (a[i+1]==5 ) )
		
		{
			n=1;
		}
		
	}
	if(n==1)
	{
		printf("true");
	}
	else
	{
		printf("false");
	}
}