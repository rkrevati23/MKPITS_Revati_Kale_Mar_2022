#include<stdio.h>
main()
{
     
    float numbers[5];       
    int i,pctr=0,nctr=0 ;
    
	printf("\nthe first number ");
	scanf("%f",&numbers [0]);
	
	printf("\nthe second number ");
	scanf("%f",&numbers [1]);		
		
	printf("\nthe third number ");
	scanf("%f",&numbers [2]);
	
	printf("\nthe fourth number ");
	scanf("%f",&numbers [3]);
	
	printf("\nthe fifth number" );
	scanf("%f",&numbers [4]);
	for(i=0; i<5; i++);
	{
		
		if(numbers[i]>0)	
		{
			pctr++;
	    }
	    else 
	    if(numbers[i]<0)
	    {
	    nctr++;	
		}
	}
	printf("\n number of possitive numbers: %d",pctr);
	printf("\n number of negative numbers: %d",nctr);
	printf("\n");
}
	
	
