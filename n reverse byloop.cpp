#include<stdio.h>
main()
{
	int num,n1,rev=0;
	printf("enter the number of digit");
	scanf("%d",&num);
	int x=num;
 while(num>0)	  
{
	n1=num%10;
	rev=rev*10+n1;
	num=num/10;
if(x==rev)
{

	printf("reverse number of digit=%d",rev);
}
}
}