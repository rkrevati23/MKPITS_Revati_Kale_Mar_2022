#include<stdio.h>
#include<conio.h>
int main()
{

	int i,a[5],t=0;
	
	printf("enter any  number\n");

	for(i=0;i<5;i++)
	{

		scanf("%d",&a[i]);

	}
	int count =0;
	for(i=0;i<5;i++)
	{
		if(a[i]==3 || a[i]==5 )
		{
			count++;
		}

	}
	printf("array of integral contain 3 or 5 = %d",count);
}