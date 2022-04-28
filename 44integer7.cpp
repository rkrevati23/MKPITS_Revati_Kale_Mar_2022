#include<stdio.h>
#include<conio.h>
int main()
{
	int i,a[7],X;
	printf("enter 7 integer number\n");
	
	for(i=0;i<7;i++)
	{
		scanf("%d",&X);
	if(X>0)
	   {
	 	a[i]=X;
     
	   }
	 else
	  {
	 	a[i]=100;
	  }
		
	}
	printf("array values are:\n");
	for(i=0;i<7;i++)
	{
		printf("a[%d] : %d\n",i,a[i]);
    }
    getch();
 }