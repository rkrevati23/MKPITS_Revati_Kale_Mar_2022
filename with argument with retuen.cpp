#include<stdio.h>
#include<conio.h>

int fun (int  x,int y)
{
	int r;
	r=x+y;
	return r;
	
}
int main()
{
	int a=2,b=6,res;
	res=fun(a,b);
	printf("%d",res);
	return 0;
}