#include<stdio.h>
#include<conio.h>
int main()
{
	int i,a[7],x;
	printf("enter 7 integer number\n");
	
	for(i=0;i<7;i++)
	{
		scanf("%d",&x);
	if(x>0)
	   {
	 	a[i]=x;
        x=3*x;     
	   }
	 else
	  {
	 	a[i]=100;
	  }
		
	}
	
	for(i=0;i<7;i++)
	{
		printf("a[%d] : %d\n",i,a[i]);
    }
    getch();
 }