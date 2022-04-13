#include<stdio.h>
#include<conio.h>
main()
{
	int num,n1,sum=0;
	printf("enter any number");
	scanf("%d",&num);
	int x=num;
while(num>0)   
{

	n1=num%10;
	sum=sum+(n1*n1*n1);
	num=num/10;
}
if(x==sum)
{
  
	printf("armstrong numbers");
}
else  
{
       printf("number is not armstrong");
}
}