#include<stdio.h>
#include<conio.h>
void fun();
int check(int x,int y);
int main()
{
	fun();
}
void fun()
{
	printf("%d\n",check(84,23));
	
	printf("%d\n",check(20,36));
	
	printf("%d\n",check(45,50));
}
     int check(int x,int y)
     {
     	return(x>=20 && x<=50 && y>=20 && y<=50);
	 }