#include<stdio.h>
#include<conio.h>
int x,y,z;
int fun()
{
	printf("enter three integer numbers\n");
	scanf("%d %d %d",&x ,&y, &z);
	if(x > y && x > z)
	{
	return x;	
	}
	else if(y > x && y > z)
	{
	return y;
	}
	else
	{
	return z;	
	}
}
int main()
{
	int s;
	s=fun();
	if(s==x)
	{
	printf("%d is greater",s);	
	}
	else if(s==y)
	{
	printf("%d is greater",s);	
	}
	else
	{
	printf("%d is greater",s);	
	}
}

