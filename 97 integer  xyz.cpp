#include<stdio.h>
#include<conio.h>
int fun();
int check(int x,int y,int z);
int main()
{
	fun();
}
int fun()
{
	printf("%d",check(4,7,8));
	
	printf("%d",check(6,7,5));
	
	printf("%d",check(1,2,3));
}
int check(int x,int y,int z)

{
	return(x<y && y<z);
}