#include<stdio.h>
main()
{
	int c, p,q,sum=0;
	printf("enter two numbers\n");
	scanf("%d%d",&p,&q);
	printf("sum of all number is not divisible by 17\n");
	for(;p<=q;p++);
	{
	if(p/17!=0)
	{
		c=p;
		sum=sum+c;	   
    } 
	}
	     printf("%d",&sum);
}