#include<stdio.h>
#include<conio.h>
int main()
{
	int i,a[7];
	printf("enter the any number\n");
	
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	int  count=0;
	int no_3=0,	no_5=0;
	for(i=0;i<5;i++)
	{
		if(a[i]==3 )
		{
		no_3 = no_3+1;
			
		}
		else
		if(a[i]==5)
		{
			no_5 = no_5+1;
		}
   }
   if(no_3 > no_5)
   {
   	printf("3 is greater than 5");
   	
   }
   else
   {
   	printf("3 is not greater than 5");
   }
	   
}
