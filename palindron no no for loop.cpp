#include<stdio.h>
#include<stdio.h>
void fun();
main()
{
	fun();
}
void fun()
{

	int num,n1,rev=0;
	printf("enter the number of digit\n");
	scanf("%d",&num);
	int x=num;
	for(;num<0;);
{
	n1=num%10;
	rev=rev*10+n1;
	num=num/10;

}
if(num==rev)
{

	printf("\n number is palindrome\n");
}
else
{
	printf("\n number is not palindrome");
}
}
