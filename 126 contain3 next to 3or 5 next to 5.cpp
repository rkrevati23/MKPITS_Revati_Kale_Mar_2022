#include<stdio.h>
#include<conio.h>
int main()
{

	int i,a[7],t=0;
	
	printf("enter any  number\n");

	for(i=0;i<7;i++)
	{

		scanf("%d",&a[i]);

	}
	int count =0;
	for(i=0;i<7;i++)
	{
		if(a[i]==5 && (a[i+1]==5 ) || a[i]==3 && a[i+1]==3)
		{
			count=count+1;
		}

	}
	printf("array of integral contain 3 next to 3 or 5 next to 5 or both = %d",count);
}