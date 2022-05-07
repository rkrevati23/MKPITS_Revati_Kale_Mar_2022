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
	printf("%d",check(11,21,31));
	
	printf("\n%d",check(13,41,27));
	
	printf("\n%d",check(51,61,71));
}
int check(int x,int y,int z)

{
	return(x%10==y%10 || x %10 ==z %10 || y %10 == z %10);
}