#include<stdio.h>
main()
{
	int num,i,fact=1;
	printf("enter number");
	scanf("%d",&num);
	i=1;
	do
	
	{
		fact=fact*i;
		i--;
		
	}while(i>=1);
	printf("fact=%d",fact);
}
