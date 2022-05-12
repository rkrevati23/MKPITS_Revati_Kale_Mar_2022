#include<stdio.h>
#include<conio.h>
int res=1;
int fun(int x,int y)
{
	if(y!=0)
	{
		res=res*x;
		fun(x, y-1);
	}
	return res;
}
int main()
{
	int a,b,power;
	
	printf("enter a and b\n");
	scanf("%d\n%d",&a, &b);
	
	power = fun(a, b);
	printf("power= %d",power);
}