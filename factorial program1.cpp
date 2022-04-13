#include<stdio.h>
main()
{
	int num,i,fact=1;
	printf("enter number");
	scanf("%d",&num);
	i=1;
	while(i>=1)
	{
		fact=fact*i;
		i--;
	}
	printf("fact=%d",fact);
}
