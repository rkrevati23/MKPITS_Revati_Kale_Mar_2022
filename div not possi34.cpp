#include<stdio.h>
int main()
{
	int p,r,div_result;
	printf("value of first number");
	scanf("%d",&p);
	
	printf("value of second number");
	scanf("%d",&r);
	
if(r!=0)
{
	div_result=p/r;
	printf("%d",div_result);
}
else
{
	printf("division not possible");
}
}