#include<stdio.h>
#include<conio.h>
int main()
{
	int i,size,n=0;
	
	printf("enter the size of array: ");
	scanf("%d",&size);
	
	int a[size];
	printf("enter the element of an array\n");
	
    for(i=0;i<size;i++)
    {
    	scanf("%d",&a[i]);
	}
	for(i=0;i<size;i++)
	{
		if(a[0]==a[size-1])
		{
		n=1;
		}
	}
	printf("\n");
	if(n==1)
	{
		printf("true");
	}
	else
	{
		printf("false");
	}
}
 