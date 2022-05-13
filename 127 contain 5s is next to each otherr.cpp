#include<stdio.h>
#include<conio.h>
int main()
{
	int i,a[7],f;
	printf("enter the any number\n");
	
	for(i=0;i<7;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0; i<7; i++)
	{
		if(a[i]==5 && (a[i+1]==5 || a[i+2]==5) )
		{
			f=1;
		}
	printf("\n");	
	}
	if(f==1)
	{
		printf("true");
	}
	else
	{
		printf("false");
	}
}