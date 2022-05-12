#include<stdio.h>
#include<conio.h>
int main()
{
	int i,a[7];
	printf("enter the any number\n");
	
	for(i=0;i<7;i++)
	{
		scanf("%d",&a[i]);
	}
	int sum=0;

	for(i=0;i<7;i++)
	{
		if(a[i]==5  )
		{ 
		
		  sum=sum+5;
	    }
    }
    if(sum==15)
    {
    	printf("sum of all 5s are exactly 15");
	}
	else
	{
		printf("sum of all 5s are not exactly 15");
	}

	
	}
	
