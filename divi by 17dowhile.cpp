#include<stdio.h>
main()
{
	int c, p,q,sum=0;
	printf("enter two numbers\n");
	scanf("%d%d",&p,&q);
	printf("sum of all number is not divisible by 17\n");
	do	while(p<=q)
	{
	if(p/17!=0)
	{
		c=p;
		sum=sum+c;	   
    }
         p++;
         
	}while(p<=q);
	     printf("%d",&sum);
}