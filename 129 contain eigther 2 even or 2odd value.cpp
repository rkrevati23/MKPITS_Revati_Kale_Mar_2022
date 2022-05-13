#include<stdio.h>
#include<conio.h>
int main()
{
	int i,a[8],f1=0,f2=0;
	
	printf("enter any number\n");
	scanf("%d",&a[i]);
	
	for(i=0; i<8; i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0; i<8; i++)
	{
		if(a[i]%2==0 && a[i+1]%2==0)
		{
			f1=1;
		}
		else if(a[i]%2!=0 && a[i+1]%2!=0)
		{
			f2=2;
		}
		
	}
	//printf("\n");
	
	if(f1==1 || f2==2)
	{
		printf("true");
	}
	else
	{
		printf("false");
	}
}