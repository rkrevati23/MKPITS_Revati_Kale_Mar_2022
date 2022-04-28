#include<stdio.h>
int main()
{
	int p,r,t,int_amt=0;
	
	printf("principle,rate of interest & time find to simple int\n");
	scanf("%d%d%d",&p,&r,&t);
	
	int_amt=(p*r*t)/100;
	
	printf("simple interest: %d",int_amt);
	
}