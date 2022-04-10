#include<stdio.h>
main()
{
	int num1,num2,num3;
	printf("enter three different value\n");
	scanf("%d%d%d",&num1,&num2,&num3);
    
 if(num1>num2 && num1>num3)   
{
 	printf("num1 is maximum");
}
 if(num2>num1 && num2>num3); 
{
	printf("num2 is maximum");
}
if(num3>num1 && num3>num2);
{
	printf("num3 is maximum");
}
}