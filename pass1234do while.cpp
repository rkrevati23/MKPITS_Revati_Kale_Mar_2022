#include<stdio.h>
#include<conio.h>
main()
{
	int x,pass;
	
	printf(" enter the password");	
	
do 
{
	scanf("%d",&x);
if(x==1234)	
{

	printf("correct password");
}
else
{
	printf("wrong password");
}
     x++;
}while(x!=0);
}
