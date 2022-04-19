#include<stdio.h>
main()
{
	int num,n1,sum=0;
	printf("enter the number of digit\n");
	scanf("%d",&num);
	int x=num;
 for(;num>0;)	  
{
	n1=num%10;
	sum=sum*10+n1;
	num=num/10;
if(x==sum)
{
	printf("sum=%d",sum);
	
}
}

}    