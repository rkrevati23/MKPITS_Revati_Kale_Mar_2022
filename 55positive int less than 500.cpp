#include<stdio.h>
int main()
{
	int i,num,n1,n2,n3,add;
	
	printf("enter positive integer number less than 500\n");
	scanf("%d",&num);
	
	if(num<500)
	
	{
	n1=num%10;
	num=num/10;
	
	n2=num%10;
	num=num/10;
	
	n3=num%10;
	
	add=n1+n2+n3;
	printf("addition of all digit=%d",add);
    }
}