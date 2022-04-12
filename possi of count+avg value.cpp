#include<stdio.h>
#include<conio.h>
main()
{
     int i,numbers[5],total=0,count=0 ;
     float average;
    
	printf("\nthe first number ");
	scanf("%d",&numbers[0]);
	
		printf("\nthe second number ");
		scanf("%d",&numbers[1]);
		
	printf("\nthe third number ");
	scanf("%d",&numbers[2]);
	
	printf("\nthe fourth number ");
	scanf("%d",&numbers[3]);
	
	printf("\nthe fifth number" );
	scanf("%d",&numbers[4]);
	
	for(i=0;i<5;i++)
	{
	   {
		  	  if(numbers[i]>0)
	  count++;
	  total=numbers[i];
       } 
    }
    average=total/count;
    printf("\n the number of possitive numbers=%d",count);
    printf("\nthe average of possitive value=%f",average);
    
}
	  

