#include<stdio.h>
#include<conio.h>
main()
{
    int num, n1,sum=0;
    printf("\nenter the n number");
    scanf("%d",&num);
    do
    
    {
    	n1=num%10;
    	
    	sum=sum*10+n1;
    	
    	num=num/10;
    	
    	printf("sum=%d",sum);
    	
	}while(num>0);
}