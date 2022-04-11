#include<stdio.h>
main()
{
	int a,b,c,prt1,sqrt ; 
	printf("enter first number\n");
	scanf("%d",&a);
	printf("enter second number\n");
	scanf("%d",&b);
	printf("enter third number\n");
	scanf("%d",&c);
	prt1=(b*b)-(4*(a)*(c));
	
	if(prt1>0 && a!=0)
	{
		double x,y;
	prt1=sqrt*(prt1);
	x=(-b + prt1)/(2*a);
	y=(-b -prt1)/(2*a);
	 
	printf("root1=%d",x);
	printf("root2=%d",y); 	
	}
	else
	{
	printf("\nimpossible root");	
	}
}
	
