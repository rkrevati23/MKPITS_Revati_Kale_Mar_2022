#include<stdio.h>

#include<conio.h>
int x1,x2;//globle decleration
int fun();

int main()
{
	int s;
	s = fun();
	if(s==0)
	{
	
	printf("%d is smaller",s);
    }
}
int fun()
{

	int x1,x2;
	printf("enter the number\n");
	scanf("%d %d",&x1,&x2);
	
	if(x1<x2)
	{
		return 0;
	}
    else
	{
		return 1;
	}
    
	}


