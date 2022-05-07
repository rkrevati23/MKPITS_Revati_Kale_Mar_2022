#include<stdio.h>
#include<conio.h>
int fun();
int check(int x,int y);
int main()
{
	fun();
}
int fun()
{
	printf("%d",check(11,21));
	
	printf("\n%d",check(11,20));
	
	printf("\n%d",check(15,15));
}
int check(int x,int y)

{
    if(x==y)
    {
    	return 0;
	}
	else if((x % 5== y % 5 && x<y || x>y))
	{
		return x;
	}
	else 
	{
		return y;
	}
}