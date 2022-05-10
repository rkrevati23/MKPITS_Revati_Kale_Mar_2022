#include<stdio.h>
#include<conio.h>
int main()
 {
 int a[3],b[3];
 int i,j,sum1=0,sum2=0;
   printf("enter first array\n");
   
   for(i=0;i<3;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("enter second array\n");
	for(j=0;j<3;j++)
	{
	printf("a[%d]= ",a[i]);	
	scanf("%d",&b[j]);	
	}
	
	for(i=0;i<3;i++)
	{
		printf("b[%d]= ",b[i]);
		sum1=sum1+a[i];
	}
	printf("sum of array 1: %d\n",sum1);
	for(j=0;j<3;j++)
	{
		sum2=sum2+b[j];
	}
	printf("sum of array first: %d\n",sum2);
	if(sum1>sum2)
	{
		printf("array first has largest sum");
	}
	else
	{
		printf("array second has largset sum");
	}
	getch();
	}
