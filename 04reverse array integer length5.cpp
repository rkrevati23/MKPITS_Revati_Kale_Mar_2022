#include<stdio.h>
int main()
{
	int i, a[5];
	printf("enter five number of array\n");

		for(i=0;i<=4;i++)
	{
		printf("a[%d]:",i);
		scanf("%d",&a[i]);
	}
	printf("\n");
	for(i=4;i>=0;i--)
	{
		printf("a[%d]=%d\n",i,a[i]);
	}

}